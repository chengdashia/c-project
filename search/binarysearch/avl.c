//
// Created by Serendipity on 2022/9/10.
//
//ƽ����������
typedef struct AVLNode{
    int data;          //������
    int balance;       //ƽ������
    struct AVLNode *lchild,*rchild;
}AVLNode,*AVLTree;