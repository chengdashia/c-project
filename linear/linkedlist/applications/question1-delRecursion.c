//
// Created by Serendipity on 2022/8/29.
//
/**
 * ���һ���ݹ��㷨��ɾ������ͷ���ĵ�����L������ֵΪx�Ľ��
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
    L = NULL;
    return true;
}

//
//��λ�����
bool ListInsert(LinkList *L,int i, ElemType e){
    if(i < 1)
        return false;
    if(i == 1){
        LNode *s = (LNode *)malloc(sizeof(LNode));
        s->next = (*L)->next;
        (*L)->next = s;
        s->data = e;
    }
    LNode *p; //ָ��pָ��ǰɨ��Ľ��
    p = *L;  //Lָ��ͷ��㣬ͷ����ǵ�0�����(��������)
    int j = 1; //��ǰpָ��ĵڼ����ڵ�
    while (p != NULL && j < i - 1){ //ѭ���ҵ� ��i- 1�����
        p = p->next;
        j++;
    }
    if(p == NULL)          //iֵ���Ϸ�
        return false;
    LNode *s = (LNode *) malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;      //�����s����p֮��
    return true;
}
void ListPrintf(LinkList L){
    LNode *p = L;
    while (p->next != NULL){
        printf("%d\n",p->next->data);
        p = p->next;
    }
}
void delRecursion(LinkList *L,ElemType x){
    LNode *p;
    if(L == NULL){
        return;
    }
    if((*L)->data == x){
        p = *L;
        *L = (*L)->next;
        free(p);
        delRecursion(L,x);
    } else{
        *L = (*L)->next;
        delRecursion(L,x);
    }
}
int main(){
    LinkList L;
    InitLinkList(&L);
    for (int i = 1; i < 10; i++) {
        ListInsert(&L,i,i+2);
    }
//    ListInsert(&L,3,2);
//    ListInsert(&L,4,2);
//    ListInsert(&L,5,2);
    //���
    ListPrintf(L);

    printf("===========�ݹ�ɾ����ͬ�� ========\n");

//    delRecursion(&L,2);
//    ListPrintf(L);



}