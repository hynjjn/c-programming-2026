#include <stdio.h>

// 1. Odd or Even
void oddOrEven(int num) {
    if (num & 1) {
        printf("%d is an odd number\n", num);
    } else {
        printf("%d is an even number\n", num);
    }
}

// 2. Bit Masking
void bitMasking(int n, int k) {
    int set = n | (1 << k);
    int clear = n & ~(1 << k);
    int toggle = n ^ (1 << k);

    printf("Set bit %d to 1: %d\n", k, set);
    printf("Clear bit %d to 0: %d\n", k, clear);
    printf("Toggle bit %d: %d\n", k, toggle);
}

// 3. Power of 2
void isPowerOfTwo(int n) {
    if (n > 0 && (n & (n - 1)) == 0) {
        printf("%d is a power of 2\n", n);
    } else {
        printf("%d is not a power of 2\n", n);
    }
}

int main() {
    int n, k;

    printf("Input an integer:");
    scanf("%d", &n);
    
    printf("Input bit position: ");
    scanf("%d", &k);

    printf("--- Results ---\n");

    printf("1. Odd or Even:\n");
    oddOrEven(n);
    printf("\n2. Bit Masking:\n");
    bitMasking(n, k);
    printf("\n3. Power of 2:\n");
    isPowerOfTwo(n);

    return 0;
}