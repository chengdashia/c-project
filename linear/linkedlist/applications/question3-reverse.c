//
// Created by Serendipity on 2022/8/29.
//
/**
 * �������������
 */
#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>

typedef int ElemType;
typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode,*LinkList;

//��ʼ��
bool InitLinkList(LinkList *L){
    *L = (LNode *) malloc(sizeof(LNode));
    if(L == NULL)
        return false;
    (*L)->next = NULL;
    return true;
}

//
bool InsertNextNode(LNode *p,ElemType e){
    if(p == NULL)
        return false;
    LNode *s = (LNode *) malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;
    return true;
}
//����
bool ListInsert(LinkList *L,int i,ElemType e){
    if(i < 1)
        return false;
    int j = 0;
    LNode *p = *L;
    while (p != NULL && j < i - 1){
        p = p->next;
        j++;
    }
    InsertNextNode(p,e);
    return true;
}
void ListPrintf(LinkList L){
    LNode *p = L;
    while (p->next != NULL){
        printf("%d\n",p->next->data);
        p = p->next;
    }
}
void ReversePrintf(LinkList L){
    if (L->next != NULL){
        ReversePrintf(L->next);   //�ݹ�
    }
    if(L != NULL){       //���
        printf("%d\n",L->data);
    }
}
int main(){
    LinkList L;
    InitLinkList(&L);
    for (int i = 1; i < 10; i++) {
        ListInsert(&L,i,i+2);
    }
    //���
    ListPrintf(L);

    printf("===========������� ========\n");

    ReversePrintf(L);

}