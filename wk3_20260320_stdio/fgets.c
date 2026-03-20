#include <stdio.h>

int main() {
    char a[100];
    fgets(a, sizeof(a), stdin); // safer
    printf("Hello, %s!", a);
    return 0;
}