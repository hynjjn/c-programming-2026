#include <stdio.h>

int main() {
    int num; // ambiguous result (no initializing)
    printf("num: %d\n", num);
    num = 5;
    printf("num: %d\n", num);
    num = 10;
    printf("num: %d\n", num);
}