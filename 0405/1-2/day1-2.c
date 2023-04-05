#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int func_a(int s[], int arr_size) {
    int ret = 0;
    for (int i = 0; i < arr_size; ++i)
        if (s[i] > ret)
            ret = s[i];
    return ret;
}

int func_b(int s[], int arr_size) {
    int ret = 0;
    for (int i = 0; i < arr_size; ++i)
        ret += s[i];
    return ret;
}

int func_c(int s[], int arr_size) {
    int ret = 101;
    for (int i = 0; i < arr_size; ++i)
        if (s[i] < ret)
            ret = s[i];
    return ret;
}
//scores_m은 배열 scores의 길이입니다.
int solution(int scores[], size_t scores_m) {
    int sum = func_b(scores, scores_m);
    int max_score = func_a(scores, scores_m);
    int min_score = func_c(scores, scores_m);
    return sum - max_score - min_score;
}

int main() {
    int arr1[] = { 50,35,78,91,85 };
    int num1 = 0;
    num1 = solution(arr1, (sizeof(arr1) / sizeof(int)));
    printf("가장 높은 점수와 가장 낮은 점수를 제외한 나머지 점수들의 합 : %d\n", num1);
    return 0;
}