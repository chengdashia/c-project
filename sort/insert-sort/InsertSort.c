//
// Created by Serendipity on 2022/9/18.
//
#include <stdio.h>

/**
 * �������� ���ڱ�
 * @param A  ����
 * @param n   ���鳤��
 */
void InsertSort(int A[],int n){
    int i, j, temp;
    for(i = 1;i < n;i++){                              //����Ԫ�ز������ź����������
        if(A[i] < A[i - 1]){                           //��A[i]�ؼ���С��ǰ��
            temp = A[i];                               // ��temp �ݴ�A[i]
            for(j = i - 1;j >=0 && A[j] > temp; --j){  //����������ź����Ԫ��
                A[j + 1] = A[j];                       //���д���temp��Ԫ�ض�����ƶ�
            }
            A[j + 1] = temp;                              //���Ƶ�����λ��
        }
    }
}
/**
 * ����������ڱ�
 * @param A  ����
 * @param n   ���鳤��
 */
void InsertSortSentry(int A[],int n){
    int i,j;
    for (i = 2; i <= n; i++) {
        if(A[i] < A[i - 1]){                                //���ν�A[2]~A[n] ���뵽ǰ������������
            A[0] = A[i];                                    //����Ϊ�ڱ� A[0] �����Ԫ��
            for (j = i - 1; A[0] < A[j] ; --j) {            //�Ӻ���ǰ���Ҵ�����λ��
                A[j + 1] = A[j];                            //���Ųλ
            }
            A[j + 1] = A[0];                               //���Ƶ�����λ��
        }
    }
}

void InsertSortHalve(int A[],int n){

}
int main(){

}