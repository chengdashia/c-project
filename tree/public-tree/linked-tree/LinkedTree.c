//
// Created by Serendipity on 2022/8/29.
//
#include <stdio.h>
typedef int ElemType;
//���Ĵ洢---�����ֵܱ�ʾ��
typedef struct CSNode{
    ElemType data;                                  //������
    struct CSNode *firstChild,*nextSibling;       //��һ�����Ӻ����ֵܽ��
}CSNode,*CSTree;