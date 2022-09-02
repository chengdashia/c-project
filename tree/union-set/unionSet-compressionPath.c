//
// Created by Serendipity on 2022/8/30.
//
/**
 * find 操作优化 (压缩路径)
 */
#define SIZE 100
int UFSets[SIZE];          //集合元素数组(双亲指针数组)

// 初始化操作
void Initial(int S[]){
    for (int i = 0; i < SIZE; i++){   //每个自成氮元素集合
        S[i] = -1;
    }
}

/**
 * find 操作 （函数 在查并集S中查找并返回包含元素x的树的根）
 * 先找到根结点，再进行压缩路径
 */
int Find(int S[],int x){
   int root = x;
    while (S[root] >= 0){  //循环找到根
        root = S[root];
    }
    while (x != root){   //压缩路径
        int t = S[x];            //t指向x的父节点
        S[x] = root;            //x直接挂到根结点下
        x = t;
    }
    return root;                //返回根结点编号
}

//union 操作 (函数 求 两个不想交子集合的并集)
void Union(int S[],int root1,int root2){
    //要求root1 和 root2 是不同的，且表示子集合的名字
    if(root1 == root2) return;
    if(S[root2] > S[root1]){        //root1的结点更多
        S[root1] += S[root2];      // 累加结点总数
        S[root2] = root1;          //小树合并到大树
    } else{
        S[root2] += S[root1];      //累加结点总数
        S[root1] = root2;          //小树合并到大树
    }

}