//
// Created by Serendipity on 2022/9/2.
//
#define MaxVertexNum 100          //图中顶点数目的最大值
typedef char VertexType;
/**边/弧*/
typedef struct ArcNode{        //边表结点
    int adjvex;                //该弧所指向的顶点的位置
    struct ArcNode *next;      //指向下一条弧的指针
    //InfoType info;              //边权值
}ArcNode;
/**顶点*/
typedef struct VNode{
    VertexType data;                  //顶点信息
    ArcNode *first;                   //指向第一条依附该顶点的边/弧的指针
}VNode,AdjList[MaxVertexNum];
/**用邻接表存储的图*/
typedef struct {
    AdjList vertices;           //邻接表
    int vexnum,arcnum;            //图的顶点数和弧线
}ALGraph;