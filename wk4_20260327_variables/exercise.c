#include <stdio.h>

int main()
{
    int a = 3;
    double b = 1.2;

    double c = b; 
    b = (int)a;     
    a = c * 10;   

    printf("%f\n", (double)a/10); // 1.2
    printf("%d\n", (int)b); // 3
    return 0;
}
