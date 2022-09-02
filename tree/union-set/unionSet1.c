//
// Created by Serendipity on 2022/8/30.
//
#define SIZE 100
int UFSets[SIZE];          //集合元素数组(双亲指针数组)

// 初始化操作
void Initial(int S[]){
    for (int i = 0; i < SIZE; i++){   //每个自成氮元素集合
        S[i] = -1;
    }
}

//find 操作 （函数 在查并集S中查找并返回包含元素x的树的根）
int Find(int S[],int x){
    while (S[x] >= 0){
        x = S[x];
    }
    return x;
}

//union 操作 (函数 求 两个不想交子集合的并集)
void Union(int S[],int root1,int root2){
    //要求root1 和 root2 是不同的，且表示子集合的名字
    if(root1 == root2) return;
    S[root2] = root1;        //将根root2 连接到 另一根root1下面
}
