#include <stdio.h>

int main() {
    printf("=== 상품 정보 입력 ===\n");
    char name[10];
    int price, quantity;
    
    // getter
    printf("상품명: ");
    scanf("%s", name);
    printf("단가: ");
    scanf("%d", &price);
    printf("수량: ");
    scanf("%d", &quantity);

    // print
    printf("=== 발행된 영수증 ===\n");
    printf("%-10s %-10s %-10s\n", "name", "price", "quantity");
    printf("%-10s %-10d %-10d\n", product_name, price, quantity);
    printf("==============================\n");
    return 0;
}