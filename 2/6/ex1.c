/*#include<stdio.h>
#include<stdlib.h>

int* solution(int *arr,int arrsize) {
	int *arrtemp = malloc(arrsize);
	int rank;
	for (int i = 0; i < arrsize / sizeof(int); i++) {
		rank = 0; //�Ź� i �ٲ� �� �ʱ�ȭ.
		for (int j = 0; j < arrsize / sizeof(int); j++) {
			if (arr[i] > arr[j]) { //�ڽź��� �۴ٸ� cnt 1����.
				rank++;
			}
		}
		arrtemp[i] = rank + 1; //��� ����.
	}
	for(int i=0;i< arrsize / sizeof(*arr);i++)
	return arrtemp;
	
	free(arrtemp);
}


int main() {
	int scorearr[8] = { 90,87,87,23,35,28,12,46 };
	int scorearr1[4] = { 10,20,30,40 };
	
	int* num1 = solution(scorearr, sizeof(scorearr));
	for (int i = 0; i < sizeof(scorearr) / sizeof(int); i++) {
		printf(" %d ", num1[i]);
	}
	printf("\n");

	int* num2 = solution(scorearr1, sizeof(scorearr1));
	for (int i = 0; i < sizeof(scorearr1) / sizeof(int); i++) {
		printf(" %d ", num2[i]);
	}


	return 0;
}*/