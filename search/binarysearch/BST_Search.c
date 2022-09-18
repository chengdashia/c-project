//
// Created by Serendipity on 2022/9/10.
//
#include <stdio.h>
#include <malloc.h>

typedef int ElemType;
//�������������
typedef struct BSTNode{
    ElemType key;
    struct BSTNode *lchild,*rchild;
}BSTNode,*BSTree;

/**
 * �ڶ����������в���ֵΪkey�Ľ��
 * ��ռ临�Ӷ�O(h)
 */
BSTNode *BST_Search(BSTree T,ElemType key){
    while (T != NULL && key != T->key){     //�����ջ���ڸ����ֵ�������ѭ��
        if(key < T->key) T = T->lchild;      //С�ڣ������������ϲ���
        else T = T->rchild;                  //���ڣ������������ϲ���
    }
    return T;
}

/**
 * �ڶ����������в���ֵΪkey�Ľ�㣨�ݹ�ʵ�֣�
 * ��ռ临�Ӷ�O(h)
 */
BSTNode *BSTSearch(BSTree T,ElemType key){
    if(T == NULL)
        return NULL;    //����ʧ��
    if(key == T->key)
        return T;       //���ҳɹ�
    else if(key < T->key)
        return BSTSearch(T->lchild,key);         //������������
    else
        return BSTSearch(T->rchild,key);         //������������
}

//�ڶ�������������ؼ���Ϊk���½��(�ݹ�ʵ��)
ElemType  BST_Insert(BSTree *T,ElemType k){
    if(T == NULL){        //ԭ��Ϊ�գ��²���Ľ��Ϊ�����
        *T = (BSTree)malloc(sizeof(BSTNode));
        (*T)->key = k;
        (*T)->lchild = (*T)->rchild = NULL;
        return 1;       //����1������ɹ�
    } else if(k == (*T)->key)     //���д�����ͬ�ؼ��ֵĽ�㣬����ʧ��
        return 0;
    else if(k < (*T)->key)        //���뵽T��������
        return BST_Insert(&((*T)->lchild),k);
    else                           //���뵽T��������
        return BST_Insert(&((*T)->rchild),k);
}

//���� str[]�йؼ������н�������������
void Creat_BST(BSTree *T,ElemType str[],ElemType n){
    T = NULL;           //��ʼʱTΪ����
    int i = 0;
    while (i < n){    //���ν�ÿ���ؼ��ֲ��뵽������������
        BST_Insert(T,str[i]);
        i++;
    }
}
