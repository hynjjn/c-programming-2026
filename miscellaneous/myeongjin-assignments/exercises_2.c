#include <stdio.h>

int main() {
    int n, temp;
    printf("Input an integer: ");
    scanf("%d", &n);

    temp = n & ~ (1 << 2);
    printf("Turn off the light of bit 3: %d\n", temp);
    
    return 0;
}
