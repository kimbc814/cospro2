#include<stdio.h>
#include<stdlib.h>

int solution(int price, char* grade){
	int answer =0;
	double percent;
	int sale;
	
	if(grade =='S'){
		answer=price*0.95;
	}
	else if(grade == 'G'){
		answer=price*0.9;
	}
	else if(grade == 'V'){
		answer=price*0.85;
	}
	else{
		answer=price;
	}
	
	return answer;
}

int main(){
	int price1=2500, price2=96900;
	char grade1='V',grade2='S';
	int price_return;
	price_return = solution(price1,grade1);
	printf("가격 : %d\n",price_return);
	price_return = solution(price2,grade2);
	printf("가격 : %d",price_return);
	
	
	
}