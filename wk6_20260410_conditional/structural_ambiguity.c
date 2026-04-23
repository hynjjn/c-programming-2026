#include <stdio.h>

int main() {
    int avocado;
    printf("Get a carton of milk. If they have avocados, get six.");
    // 서술형에 나올 수도... 
    // 아보카도가 있으면 우유 6개, 없으면 우유 1개
    printf("아보카도 개수: ");
    scanf("%d", &avocado);
    if (avocado == 0) {
        printf("우유 1개 구매\n");
    } else {
        printf("우유 6개 출력\n");
    }

    return 0;
}
