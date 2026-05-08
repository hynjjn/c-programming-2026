#include <stdio.h>

void changeValue(int x) {
    x = 99;
}

void changeArray(int arr[]) {
    arr[0] = 99;
}

int main() {

    int a = 1;
    changeValue(a);
    printf("%d\n", a);


    int array[] = {1};
    changeArray(array);
    printf("%d\n", array[0]);
}