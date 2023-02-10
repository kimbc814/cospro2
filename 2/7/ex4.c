#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int solution(int time_table[],int time_table_len,int n){
	int answer=0;
	int* a=(int*)malloc(sizeof(int)*n);
	int temp_num1=0;
	
	for(int k=0;k<n;k++){
		a[k]=0;
	}
	
	for(int i=0;i<time_table_len;i++){
		a[i%n]+=time_table[i];
	}
	
	
	for(int j=0;j<n;j++){
		if(temp_num1<=a[j]){
			temp_num1=a[j];
		}
	}
	answer=temp_num1;
	return answer;
}

int main(){
	int time_table1[]={1,5,1,9};
	int time_table1_len=4;
	int n1=3;
	int ret1=solution(time_table1,time_table1_len,n1);
	
	printf("값 %d\n",ret1);
	
	int time_table2[]={4,8,2,5,4,6,7};
	int time_table2_len=7;
	int n2=4;
	int ret2=solution(time_table2,time_table2_len,n2);
	
	printf("값 %d\n",ret2);
	
	
}