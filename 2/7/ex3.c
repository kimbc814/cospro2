#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int solution(int temperature[],int temperature_len,int A,int B){
	int answer=0;
	int temp_data=0;
	int A1=A-1;
	int B1=B-1;
	if(temperature[A1]>temperature[B1]){
		temp_data=temperature[B1];
	}
	else temp_data=temperature[A1];
	for(int i=A1;i<B;i++){
		if(temperature[i]>temp_data){
			answer++;
		}
	}
	
	
	return answer;
}

int main(){
	int temperature[]={3,2,1,5,4,3,3,2};
	int temperature_len=8;
	int A=1;
	int B=6;
	int ret=solution(temperature,temperature_len,A,B);
	
	printf("값 : %d\n", ret);
}