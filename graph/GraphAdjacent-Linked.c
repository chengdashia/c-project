//
// Created by Serendipity on 2022/9/2.
//
#define MaxVertexNum 100          //ͼ�ж�����Ŀ�����ֵ
typedef char VertexType;
/**��/��*/
typedef struct ArcNode{        //�߱���
    int adjvex;                //�û���ָ��Ķ����λ��
    struct ArcNode *next;      //ָ����һ������ָ��
    //InfoType info;              //��Ȩֵ
}ArcNode;
/**����*/
typedef struct VNode{
    VertexType data;                  //������Ϣ
    ArcNode *first;                   //ָ���һ�������ö���ı�/����ָ��
}VNode,AdjList[MaxVertexNum];
/**���ڽӱ�洢��ͼ*/
typedef struct {
    AdjList vertices;           //�ڽӱ�
    int vexnum,arcnum;            //ͼ�Ķ������ͻ���
}ALGraph;