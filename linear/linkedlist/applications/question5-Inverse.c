//
// Created by Serendipity on 2022/8/29.
//

/**
* ����ͷ���ĵ�����͵����ã���ν�ġ��͵ء� ��ָ�����ռ临�Ӷ�ΪO(1)
*/
#include <stdio.h>
#include <stdbool.h>
#include <malloc.h>

typedef int ElemType;
typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode,*LinkList;

bool InitList(LinkList *L){
    //����һ��ͷָ��
    *L = (LNode *) (LNode *) malloc(sizeof(LNode));
    if(L == NULL)     //ͷ���֮����ʱ��û�нڵ�
        return false;
    (*L)->next = NULL;   //ͷ���֮����ʱû�нڵ�
    return true;
}
//����������p���֮�����Ԫ��e
bool InsertNextNode(LNode *p,ElemType e){
    if(p == NULL)
        return false;
    LNode *s = (LNode *) malloc(sizeof(LNode));
    if(s == NULL)          //�ڴ����ʧ��
        return false;
    s->data = e;      //�ý��s��������Ԫ��e
    s->next = p->next;
    p->next = s;      //�����s����p֮��
    return true;
}
//�ڵ�i��λ�ò���Ԫ�� e
bool  ListInsert(LinkList *L,int i ,ElemType e){
    if(i < 1)
        return false;
    LNode *p; //ָ��pָ��ǰɨ��Ľ��
    p = *L;  //Lָ��ͷ��㣬ͷ����ǵ�0�����(��������)
    int j = 0; //��ǰpָ��ĵڼ����ڵ�
    while (p != NULL && j < i - 1){ //ѭ���ҵ� ��i- 1�����
        p = p->next;
        j++;
    }
    InsertNextNode(p,e);
    return true;

}
void ListPrintf(LinkList L){
    while (L->next != NULL){
        L = L->next;
        printf("%d\n",L->data);
    }
}
/**
 * ������������
 *  ԭ��
 *  ��β�巨��ͷ�巨
 */
LinkList Inverse(LinkList L){
    LNode *p,*r;                  //p Ϊ����ָ�룬rΪp�ĺ�� �Է�����
    p = L->next;                  //�ӵ�һ��Ԫ�ؽ�㿪ʼ
    L->next = NULL;               //�Ƚ�ͷ���L��next����ΪNULL
    while (p != NULL){            //���ν�Ԫ�ؽ��ժ��
        r = p->next;              //�ݴ�p�ĺ��
        p->next = L->next;        //��p�����뵽ͷ���֮��
        L->next = p;
        p = r;
    }
    return L;
}



void R_Printf(LinkList L){
    if(L->next != NULL){
        R_Printf(L->next);
    }
    if(L != NULL)
        printf("%d\n",L->data);
}
int main(){
    LinkList L;
    InitList(&L);

    for (int i = 1; i < 10; ++i) {
        ListInsert(&L,i,i+3);
    }

    ListPrintf(L);

    printf("=========== ����  ========\n");

    LinkList l1 = Inverse(L);
    ListPrintf(l1);



}