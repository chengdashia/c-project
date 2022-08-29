//
// Created by Serendipity on 2022/8/29.
//
#include <stdio.h>
typedef int ElemType;
//树的存储---孩子兄弟表示法
typedef struct CSNode{
    ElemType data;                                  //数据域
    struct CSNode *firstChild,*nextSibling;       //第一个孩子和右兄弟结点
}CSNode,*CSTree;