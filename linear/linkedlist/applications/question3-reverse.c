//
// Created by Serendipity on 2022/8/29.
//
/**
 * 将链表逆序输出
 */
#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>

typedef int ElemType;
typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode,*LinkList;

//初始化
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
//插入
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
        ReversePrintf(L->next);   //递归
    }
    if(L != NULL){       //输出
        printf("%d\n",L->data);
    }
}
int main(){
    LinkList L;
    InitLinkList(&L);
    for (int i = 1; i < 10; i++) {
        ListInsert(&L,i,i+2);
    }
    //输出
    ListPrintf(L);

    printf("===========逆序输出 ========\n");

    ReversePrintf(L);

}