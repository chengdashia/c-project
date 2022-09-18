//
// Created by Serendipity on 2022/9/18.
//
#include <stdio.h>

/**
 * 插入排序不 带哨兵
 * @param A  数组
 * @param n   数组长度
 */
void InsertSort(int A[],int n){
    int i, j, temp;
    for(i = 1;i < n;i++){                              //将各元素插入已排好序的序列中
        if(A[i] < A[i - 1]){                           //若A[i]关键字小于前驱
            temp = A[i];                               // 用temp 暂存A[i]
            for(j = i - 1;j >=0 && A[j] > temp; --j){  //检查所有已排好序的元素
                A[j + 1] = A[j];                       //所有大于temp的元素都向后移动
            }
            A[j + 1] = temp;                              //复制到插入位置
        }
    }
}
/**
 * 插入排序带哨兵
 * @param A  数组
 * @param n   数组长度
 */
void InsertSortSentry(int A[],int n){
    int i,j;
    for (i = 2; i <= n; i++) {
        if(A[i] < A[i - 1]){                                //依次将A[2]~A[n] 插入到前面已排序序列
            A[0] = A[i];                                    //复制为哨兵 A[0] 不存放元素
            for (j = i - 1; A[0] < A[j] ; --j) {            //从后向前查找待插入位置
                A[j + 1] = A[j];                            //向后挪位
            }
            A[j + 1] = A[0];                               //复制到插入位置
        }
    }
}

void InsertSortHalve(int A[],int n){

}
int main(){

}