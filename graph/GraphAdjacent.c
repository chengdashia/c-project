//
// Created by Serendipity on 2022/9/2.
//
/**
* ͼ�Ĵ洢 ,�ڽӾ���
*/
#define MaxVertexNum 100                  //������Ŀ�����ֵ
#define INFINITY                          //���ĳ��������
typedef char VertexType;                  //�������������
typedef int EdgeType;                     //��Ȩͼ�б���Ȩֵ����������
typedef struct {
    VertexType  Vex[MaxVertexNum];          //�����
    EdgeType Edge[MaxVertexNum][MaxVertexNum];  //�ڽӾ��󡢱߱�
    int vexnum,arcnum;                          //ͼ�Ķ������ͺ���
}MGraph;