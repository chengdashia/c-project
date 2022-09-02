//
// Created by Serendipity on 2022/8/30.
//
#define SIZE 100
int UFSets[SIZE];          //����Ԫ������(˫��ָ������)

// ��ʼ������
void Initial(int S[]){
    for (int i = 0; i < SIZE; i++){   //ÿ���Գɵ�Ԫ�ؼ���
        S[i] = -1;
    }
}

//find ���� ������ �ڲ鲢��S�в��Ҳ����ذ���Ԫ��x�����ĸ���
int Find(int S[],int x){
    while (S[x] >= 0){
        x = S[x];
    }
    return x;
}

//union ���� (���� �� �������뽻�Ӽ��ϵĲ���)
void Union(int S[],int root1,int root2){
    //Ҫ��root1 �� root2 �ǲ�ͬ�ģ��ұ�ʾ�Ӽ��ϵ�����
    if(root1 == root2) return;
    S[root2] = root1;        //����root2 ���ӵ� ��һ��root1����
}
