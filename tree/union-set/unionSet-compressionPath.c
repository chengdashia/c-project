//
// Created by Serendipity on 2022/8/30.
//
/**
 * find �����Ż� (ѹ��·��)
 */
#define SIZE 100
int UFSets[SIZE];          //����Ԫ������(˫��ָ������)

// ��ʼ������
void Initial(int S[]){
    for (int i = 0; i < SIZE; i++){   //ÿ���Գɵ�Ԫ�ؼ���
        S[i] = -1;
    }
}

/**
 * find ���� ������ �ڲ鲢��S�в��Ҳ����ذ���Ԫ��x�����ĸ���
 * ���ҵ�����㣬�ٽ���ѹ��·��
 */
int Find(int S[],int x){
   int root = x;
    while (S[root] >= 0){  //ѭ���ҵ���
        root = S[root];
    }
    while (x != root){   //ѹ��·��
        int t = S[x];            //tָ��x�ĸ��ڵ�
        S[x] = root;            //xֱ�ӹҵ��������
        x = t;
    }
    return root;                //���ظ������
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