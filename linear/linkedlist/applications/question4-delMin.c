//
// Created by Serendipity on 2022/8/28.
//
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
bool DelMin(LinkList *L){
    LNode *pre = *L,*p = (*L)->next;     //p为工作指针，pre指向其前驱
    LNode *minPre = pre,*minp = p;  //保存最小值结点及其前驱
    while (p->next != NULL){
        if(p->data < minp->data){
            minp = p;                //找到比之前找到的最小值结点更小的结点
            minPre = pre;
        }
        pre = p;                  //继续扫描下一个结点
        p = p->next;
    }
    minPre->next = minp->next;
    free(minp);          //删除最小值结点
    return true;
}
int main(){
    LinkList L;
    InitLinkList(&L);
    for (int i = 1; i < 10; i++) {
        ListInsert(&L,i,i+2);
    }
    //输出
    ListPrintf(L);

}