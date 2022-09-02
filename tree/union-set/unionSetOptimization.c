//
// Created by Serendipity on 2022/8/30.
//
/**
 * �Ժϲ����������Ż�����С���ϲ������������µ����ĸ߶Ⱦ����ܵ�С
 * �������ҵ�ʱ�临�ӶȻή��
 */
#define SIZE 100
int UFSets[SIZE];          //����Ԫ������(˫��ָ������)

// ��ʼ������
void Initial(int S[]){
    for (int i = 0; i < SIZE; i++){   //ÿ���Գɵ�Ԫ�ؼ���
        S[i] = -1;
    }
}

//find ���� ������ �ڲ鲢��S�в��Ҳ����ذ���Ԫ��x�����ĸ��� O(log2n)
int Find(int S[],int x){
    while (S[x] >= 0){   //ѭ��Ѱ��x�ĸ�
        x = S[x];
    }
    return x;            //����S[] С��0
}

//union ���� (���� �� �������뽻�Ӽ��ϵĲ���)
void Union(int S[],int root1,int root2){
    //Ҫ��root1 �� root2 �ǲ�ͬ�ģ��ұ�ʾ�Ӽ��ϵ�����
    if(root1 == root2) return;
    if(S[root2] > S[root1]){        //root1�Ľ�����
        S[root1] += S[root2];      // �ۼӽ������
        S[root2] = root1;          //С���ϲ�������
    } else{
        S[root2] += S[root1];      //�ۼӽ������
        S[root1] = root2;          //С���ϲ�������
    }

}
