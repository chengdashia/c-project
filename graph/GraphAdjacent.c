//
// Created by Serendipity on 2022/9/2.
//
/**
* 图的存储 ,邻接矩阵法
*/
#define MaxVertexNum 100                  //顶点数目的最大值
#define INFINITY                          //最大的常量“无穷”
typedef char VertexType;                  //顶点的数据类型
typedef int EdgeType;                     //带权图中边上权值的数据类型
typedef struct {
    VertexType  Vex[MaxVertexNum];          //顶点表
    EdgeType Edge[MaxVertexNum][MaxVertexNum];  //邻接矩阵、边表
    int vexnum,arcnum;                          //图的顶点数和狐数
}MGraph;