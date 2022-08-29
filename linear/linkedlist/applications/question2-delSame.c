//
// Created by Serendipity on 2022/8/29.
//
/**
* 删除单链表L中的所有值为x的结点
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
//后插操作，在p结点之后插入元素e
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
//在第i个位置插入元素e
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
 * 删除单链表L中所有的值为x的点
 */
void DelSame(LinkList *L,ElemType x){
    //置 p 和 pre 的初始值
    LNode *p = (*L)->next,*pre = *L,*q;
    while (p != NULL){
        if(p->data == x){
            q = p;           //q指向该结点
            p = p->next;
            pre->next = p;     //删除*q 结点
            free( q);   //释放*q 结点的空间
        } else{             //否则, pre 和 p 同步后移
           pre = p;             //pre  指向 p
           p = p->next;         //  p  后移
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

    printf("=========== 删除相同的 ========\n");

    DelSame(&L,2);
    ListPrintf(L);
}


