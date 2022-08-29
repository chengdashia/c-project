//
// Created by Serendipity on 2022/8/29.
//
/**
 * 设计一个递归算法，删除不带头结点的单链表L中所有值为x的结点
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
    L = NULL;
    return true;
}

//
//按位序插入
bool ListInsert(LinkList *L,int i, ElemType e){
    if(i < 1)
        return false;
    if(i == 1){
        LNode *s = (LNode *)malloc(sizeof(LNode));
        s->next = (*L)->next;
        (*L)->next = s;
        s->data = e;
    }
    LNode *p; //指针p指向当前扫描的结点
    p = *L;  //L指向头结点，头结点是第0个结点(不存数据)
    int j = 1; //当前p指向的第几个节点
    while (p != NULL && j < i - 1){ //循环找到 第i- 1个结点
        p = p->next;
        j++;
    }
    if(p == NULL)          //i值不合法
        return false;
    LNode *s = (LNode *) malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;      //将结点s连到p之后
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
    //输出
    ListPrintf(L);

    printf("===========递归删除相同的 ========\n");

//    delRecursion(&L,2);
//    ListPrintf(L);



}