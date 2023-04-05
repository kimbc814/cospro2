#include <stdio.h>
#include <stdlib.h>

int student_score[] = { 86,72,98,60,45 };

int* solution(int scores[]) {
    int* grade_counter = (int*)malloc(sizeof(int) * 5);
    for (int i = 0; i < 5; i++) {
        grade_counter[i] = 0;
    }
    for (int i = 0; i < 5; i++)
    {
        if (scores[i] >= 85)
            grade_counter[0] += 1;
        else if (scores[i] >= 70)
            grade_counter[1] += 1;
        else if (scores[i] >= 55)
            grade_counter[2] += 1;
        else if (scores[i] >= 40)
            grade_counter[3] += 1;
        else
            grade_counter[4] += 1;
    }
    return grade_counter;
}

int main() {
    int* data = solution(student_score);
    printf("\n ");
    for (int i = 0; i < 5; i++) {
        printf("  %c : %d\n ",65+i, data[i]);
    }
    free(data);
    return 0;
}