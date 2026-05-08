#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int size = 5;
    arr = (int*)malloc(sizeof(int) * size);
    for(int i = 0; i < size; i++) {
        arr[i] = i;
        printf("%d ", arr[i]);
    }
    printf("\n");
    size = 10;
    arr = (int*)realloc(arr, sizeof(int) * size);
    for(int i = 0; i < size; i++) {
        arr[i] = i;
        printf("%d ", arr[i]);
    }
    return 0;
}