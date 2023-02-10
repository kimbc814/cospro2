#include<stdio.h>
#include<stdlib.h>

int month_list[]={31,28,31,30,31,30,31,31,30,31,30,31};

int func_a(int month, int day){
	
	int total = 0;
	
	
		for(int i=0;i<month-1;i++){
			total +=month_list[i];
		}
	
	total +=day;

	return total;
}

int main(){
	for(int i=0;i<13;i++){
		for(int j=1;j<month_list[i]+1;j++){
			printf("   %d", func_a(i+1,j));
		}
		printf("\n");
	}

}