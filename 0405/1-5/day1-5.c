#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
//stones_m은 배열 stones의 길이입니다.
int solution(int stones[], size_t stones_m) {
    int cnt = 0;
    int current = 0;
    while (current < stones_m) {
        current += stones[current];
        cnt++;
    }
    return cnt;
}
int main() {
    int stonarr[] = { 2,5,1,3,2,1 };
    int stonarrsize = sizeof(stonarr) / sizeof(int);
    int num1 = solution(stonarr, stonarrsize);
    printf("횟수 : %d\n", num1);
    return 0;
}
