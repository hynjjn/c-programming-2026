#include <stdio.h>

#define WORKDAY 5
#define WORKHOUR 8

int main() {
    int seed = 50000000;
    int team = 3;
    int pay = 10320;
    int rent = 1000000;
    int cost = 450000;
    int revenue = 200000;

    // 인건비
    int human = pay * WORKDAY * WORKHOUR * 4 * 3;
    int expense = rent + cost + human - revenue;
    double res = (double)seed / expense;

    printf("%f\n", res);

}