#include<stdio.h>
#include<stdlib.h>

const int AVG = 70;

int solution(int korean, int english) {
	int answer= 3*AVG-(korean+english);
	return answer;
}

int main() {
	int korean = 70;
	int english = 60;
	int ret = solution(korean, english);

	printf("���� �ּ� ���� :  %d \n", ret);
	return 0;
}