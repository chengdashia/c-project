//
// Created by Serendipity on 2022/8/29.
//

#include <stdio.h>
#define MAX_TREE_SIZE 100              //�����������
typedef int ELemType;
typedef struct {                       //���ݽ�㶨��
    ELemType data;                     //����Ԫ��
    int parent;                        //˫��λ����
}PTNode;
typedef struct {                       //�������Ͷ���
    PTNode nodes[MAX_TREE_SIZE];       //˫�ױ�ʾ
    int n;                             //�ڵ���
}PTree;