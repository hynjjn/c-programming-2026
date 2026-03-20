#include <stdio.h>

int main() {
    char a[100];
    gets(a); // unsafe
    printf("Hello, %s!", a);
    return 0;
}