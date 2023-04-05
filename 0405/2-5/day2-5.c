#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_row_len은 2차원 배열 arr의 행(세로) 길이입니다.
// arr_col_len은 2차원 배열 arr의 열(가로) 길이입니다.
// arr[i][j]는 arr의 i번째 행의 j번째 열에 저장된 값을 의미합니다.
int solution(int(*arr)[4], int arr_row_len, int arr_col_len, int kk) {
    int answer = 0;
    int temp=0;
    int* data=(int*)malloc(sizeof(int)*arr_row_len*arr_col_len);
    for(int i=0;i<arr_row_len*arr_col_len;i++){
        data[i]=1000;
        for(int j=0;j<arr_row_len;j++){
            for(int k=0;k<arr_col_len;k++){
                if(data[i]>=arr[j][k] && arr[j][k]>temp){
                    data[i]=arr[j][k];
                }
            }
        }
        temp=data[i];
    }
    answer=data[kk-1];
    free(data);
    return answer;
}

int main(){
	int arr1[][4]={
					{5,12,4,31},
					{24,13,11,2},
					{43,44,19,26},
					{33,65,20,21}
				   };
	//int arr1[4][4]={{5,12,4,31},{24,13,11,2},{43,44,19,26},{33,65,20,21}};
	printf(" n번째 작은 값 n = ");
	int num1;
	scanf("%d",&num1);
	int num2 = solution(arr1,4,4,num1);
	printf(" %d번째 작은 값 : %d\n",num1,num2);
	return 0;
	
}