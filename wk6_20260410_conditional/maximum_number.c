#include <stdio.h>

int main() {
    int a = 2;
    if (a > 1) {
        a--;
    }
    // 이렇게 하면 문제: 앞의 if의 결과값이 뒤의 if를 affect함
    if (a <= 1) {
        a++;
    }
    printf("%d", a);
    return 0;
}