#include <stdio.h>

int main() {
    int num = 2147483647; // 최대 정수값
    printf("Max: %d\n", num);
    num++;
    printf("Value: %d\n", num++);
    return 0;
}