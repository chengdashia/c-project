//
// Created by Serendipity on 2022/8/29.
//
#include<stdio.h>
#define MAX_TREE_SIZE 100
typedef int ElemType;
struct CTNode{
    int child;                       //���ӽ���������е�λ��
    struct CTNode *next;             //��һ������
};
typedef struct {
    ElemType data;
    struct CTNode *firstChild;       //��һ������
}CTBox;
typedef struct {
    CTBox nodes[MAX_TREE_SIZE];
    int n,r;                     //������͸���λ��
}CTree;
