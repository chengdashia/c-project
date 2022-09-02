//
// Created by Serendipity on 2022/9/1.
//
#include <stdio.h>
#include <stdbool.h>
#include <malloc.h>

typedef int ElemType;
typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode,*LinkList;

bool InitListList(LinkList *L){
    *L = (LNode *)malloc(sizeof(LNode));
    if(L == NULL){
        return false;
    }
    (*L)->next = NULL;
    return true;
}
