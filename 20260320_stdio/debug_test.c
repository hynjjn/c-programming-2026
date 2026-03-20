#include <stdio.h>
int main() {
    int price = 10000;
    int discountRate = 10;
    int finalPrice;

    finalPrice = (price - (price * ((double)discountRate / 100)));
    printf("최종 가격: %d원\n", finalPrice);
    return 0;
}