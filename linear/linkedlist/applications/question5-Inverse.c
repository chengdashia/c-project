//
// Created by Serendipity on 2022/8/29.
//

/**
* 将带头结点的单链表就地逆置，所谓的“就地” 是指辅助空间复杂度为O(1)
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
    //分配一个头指针
    *L = (LNode *) (LNode *) malloc(sizeof(LNode));
    if(L == NULL)     //头结点之后暂时还没有节点
        return false;
    (*L)->next = NULL;   //头结点之后暂时没有节点
    return true;
}
//后插操作；在p结点之后插入元素e
bool InsertNextNode(LNode *p,ElemType e){
    if(p == NULL)
        return false;
    LNode *s = (LNode *) malloc(sizeof(LNode));
    if(s == NULL)          //内存分配失败
        return false;
    s->data = e;      //用结点s保存数据元素e
    s->next = p->next;
    p->next = s;      //将结点s连到p之后
    return true;
}
//在第i个位置插入元素 e
bool  ListInsert(LinkList *L,int i ,ElemType e){
    if(i < 1)
        return false;
    LNode *p; //指针p指向当前扫描的结点
    p = *L;  //L指向头结点，头结点是第0个结点(不存数据)
    int j = 0; //当前p指向的第几个节点
    while (p != NULL && j < i - 1){ //循环找到 第i- 1个结点
        p = p->next;
        j++;
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
 * 将单链表逆置
 *  原理：
 *  将尾插法变头插法
 */
LinkList Inverse(LinkList L){
    LNode *p,*r;                  //p 为工作指针，r为p的后继 以防断链
    p = L->next;                  //从第一个元素结点开始
    L->next = NULL;               //先将头结点L的next域置为NULL
    while (p != NULL){            //依次将元素结点摘下
        r = p->next;              //暂存p的后继
        p->next = L->next;        //将p结点插入到头结点之后
        L->next = p;
        p = r;
    }
    return L;
}



void R_Printf(LinkList L){
    if(L->next != NULL){
        R_Printf(L->next);
    }
    if(L != NULL)
        printf("%d\n",L->data);
}
int main(){
    LinkList L;
    InitList(&L);

    for (int i = 1; i < 10; ++i) {
        ListInsert(&L,i,i+3);
    }

    ListPrintf(L);

    printf("=========== 逆置  ========\n");

    LinkList l1 = Inverse(L);
    ListPrintf(l1);



}