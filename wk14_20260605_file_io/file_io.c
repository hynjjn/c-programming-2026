#include <stdio.h>

int main() {
    // if the file does not exist, create it
    // FILE *fptr = fopen("result.txt", "w"); // in write mode, just opening with file pointer will remove all data from the file
    // FILE *fptr = fopen("result2.txt", "a");
    FILE *fptr = fopen("result.txt", "r");
    
    char myString[100];
    fgets(myString, 100, fptr);
    printf("%s\n", myString);

    // fprintf(fptr, "added\n");
    
    fclose(fptr);

    return 0;
}