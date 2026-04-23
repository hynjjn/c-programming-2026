#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;

    if (n % 2 != 0) {
        int k = (n + 1) / 2;
        answer = k * k;
    } else {
        int k = n / 2;
        answer = (2 * k * (k + 1) * (2 * k + 1)) / 3;
    }

    return answer;
}