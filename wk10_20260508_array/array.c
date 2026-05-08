#include <stdio.h>

int main() {
    // this doesn't work
    // int a1 = 1;
    // int a2 = 2;
    // int a3 = 3;
    // int a4 = 4;

    // for (int i = 1; i <= 4; i++) {
    //     printf("%d\n", ai);
    // }

    int v[] = {1, 2, 3, 4};

    for (int i = 1; i <= 4; i++) {
        printf("%d\n", v[i]);
    }

    return 0;
}