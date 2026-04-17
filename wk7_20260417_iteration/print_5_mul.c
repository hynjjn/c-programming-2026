#include <stdio.h>

int main() {
    int i = 1;
    while (i < 10) {
        printf("%d * %d = %d\n", 5, i, 5*i);
        i++;
    }
    return 0;
}