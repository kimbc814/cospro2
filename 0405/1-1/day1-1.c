#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int func_a(int k) {
	int sum = 0;
	for (int i = 0; i <= k; ++i)
		sum += i;
	return sum;
}

int solution(int n, int m) {
	int sum_to_m = func_a(m);
	int sum_to_n = func_a(n - 1);
	int answer = sum_to_m - sum_to_n;
	return answer;
}

int main() {
	int num1, num2, resault;
	printf(" n = ");
	scanf("%d", &num1);
	printf(" m = ");
	scanf("%d", &num2);
	if (num1 > num2) {
		int temp_num = num1;
		num1 = num2;
		num2 = temp_num;
	}
	printf("n부터 m까지의 합 : %d\n", resault = solution(num1, num2));
	return 0;
}