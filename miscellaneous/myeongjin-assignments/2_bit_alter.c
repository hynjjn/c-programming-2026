#include <stdio.h>

int main() {
    int n, k, temp;
    printf("Input an integer: ");
    scanf("%d", &n);
    printf("Input k: ");
    scanf("%d", &k);

    // 1. Set
    temp = n | (1 << k);
    printf("Set bit %d to 1: %d\n", k, temp);
    
    // 2. Clear
    temp = n & ~ (1 << k);
    printf("Clear bit %d to 0: %d\n", k, temp);

    // 3. Toggle
    temp = n ^ (1 << k);    
    printf("Toggle bit %d: %d\n", k, temp);

    return 0;
}
