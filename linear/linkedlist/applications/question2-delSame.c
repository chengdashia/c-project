//
// Created by Serendipity on 2022/8/29.
//
/**
* ɾ��������L�е�����ֵΪx�Ľ��
*/
#include <stdio.h>
#include <stdbool.h>
#include <malloc.h>

typedef int ElemType;
typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode,*LinkList;

bool InitList(LinkList *L){
    *L = (LNode *)malloc(sizeof(LNode));
    if(L == NULL)
        return false;
    (*L)->next = NULL;
    return true;
}
//����������p���֮�����Ԫ��e
bool InsertNextNode(LNode *P,ElemType e){
    if(P == NULL){
        return false;
    }
    LNode *s = (LNode *) malloc(sizeof(LNode));
    if(s == NULL)
        return false;
    s->data = e;
    s->next = P->next;
    P->next = s;
    return true;
}
//�ڵ�i��λ�ò���Ԫ��e
bool ListInsert(LinkList *L,int i,ElemType e){
    if(i < 1){
        return false;
    }
    LNode *p = *L;
    int j = 0;
    while (p != NULL && j < i - 1){
        p = p->next;
        j ++;
    }
    InsertNextNode(p,e);
    return true;
}
void ListPrintf(LinkList L){
    while (L->next != NULL){
        L = L->next;
        printf("%d\n",L->data);
    }
}
/**
 * ɾ��������L�����е�ֵΪx�ĵ�
 */
void DelSame(LinkList *L,ElemType x){
    //�� p �� pre �ĳ�ʼֵ
    LNode *p = (*L)->next,*pre = *L,*q;
    while (p != NULL){
        if(p->data == x){
            q = p;           //qָ��ý��
            p = p->next;
            pre->next = p;     //ɾ��*q ���
            free( q);   //�ͷ�*q ���Ŀռ�
        } else{             //����, pre �� p ͬ������
           pre = p;             //pre  ָ�� p
           p = p->next;         //  p  ����
        }
    }
}
int main(){
    LinkList L;
    InitList(&L);

    for (int i = 1; i < 10; ++i) {
        ListInsert(&L,i,i+3);
    }
    ListInsert(&L,3,2);
    ListInsert(&L,4,2);
    ListInsert(&L,5,2);

    ListPrintf(L);

    printf("=========== ɾ����ͬ�� ========\n");

    DelSame(&L,2);
    ListPrintf(L);
}


