#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "w");
    if (fp == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return 0;
    }

    fprintf(fp, "C Language File I/O\n");
    fputs("Hello, File\n", fp);
    fclose(fp);

    char buffer[100];
    fp = fopen("test.txt", "r");
    if (fp == NULL) {
        printf("파일이 존재하지 않습니다.\n");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }
    fclose(fp);
}