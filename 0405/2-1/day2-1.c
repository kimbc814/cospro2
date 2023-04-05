#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int height[], int height_len, int k) {
	int answer = 0;
	for (int i = 0; i < height_len; ++i)
		if (height[i] > k)
			answer++;
	return answer;
}
int main() {
	int heightarr[] = { 165,170,175,180,184 };
	int heightarrsize = sizeof(heightarr) / sizeof(int);
	int num1, num2;
	printf(" 기준 키 : ");
	scanf("%d", &num1);
	printf(" %d\n", solution(heightarr, heightarrsize, num1));
	return 0;
}
