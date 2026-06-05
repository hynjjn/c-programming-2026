#include <stdio.h>

int main() {
    FILE *fptr = fopen("result.txt", "w");
    fclose(fptr);
    return 0;
}