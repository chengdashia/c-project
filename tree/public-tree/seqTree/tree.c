//
// Created by Serendipity on 2022/8/29.
//

#include <stdio.h>
#define MAX_TREE_SIZE 100              //树中最多结点数
typedef int ELemType;
typedef struct {                       //数据结点定义
    ELemType data;                     //数据元素
    int parent;                        //双亲位置域
}PTNode;
typedef struct {                       //树的类型定义
    PTNode nodes[MAX_TREE_SIZE];       //双亲表示
    int n;                             //节点数
}PTree;