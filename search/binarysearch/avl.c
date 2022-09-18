//
// Created by Serendipity on 2022/9/10.
//
//平衡二叉树结点
typedef struct AVLNode{
    int data;          //数据域
    int balance;       //平衡因子
    struct AVLNode *lchild,*rchild;
}AVLNode,*AVLTree;