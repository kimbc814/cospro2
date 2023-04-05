#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int price[], int price_len, int money) {
    int answer = 0;
    for(int i=0;i<price_len;i++){
        answer+=price[i];
    }
    if(money>=answer){
    answer=money-answer;
    return answer;
    }
    else {return -1;}
}
int main(){
	int price[]={2100,3200,2100,800};
	int price_size=4;//sizeof(price)/sizeof(int);
	int num1;
	printf("지불 금액 : ");
	scanf("%d",&num1);
	int num2;
	num2 =solution(price,price_size,num1);
	
	if(num2 != -1){
		printf("거스름돈 : %d\n",num2);}
	else{printf("지불 금액이 모자랍니다.\n");}
	return 0;
}