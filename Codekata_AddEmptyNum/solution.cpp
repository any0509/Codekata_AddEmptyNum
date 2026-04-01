#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}



// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int answer = 0;

    for (int i = 0; i < 10; ++i) {
        answer += i;
    }

    for (int i = 0; i < numbers_len; ++i) {
        answer -= numbers[i];
    }

    return answer;
}