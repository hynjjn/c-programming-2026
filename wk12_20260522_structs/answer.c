#include <stdio.h>

struct ss {
    int num;
    char letter;
};

void set(struct ss* s, int n, char c) {
    s->num = n;
    s->letter = c;
}

// call by value
void print(struct ss s) {
    printf("num = %d\n", s.num);
    printf("letter = %c\n", s.letter);
}

// call by reference
void increase(struct ss* s) {
    s -> num++;
}

int main() {
    struct ss s1 = {10, 'A'};
    set(&s1, 10, 'A');
    print(s1);
    increase(&s1);
    print(s1);
    // printf("%d\n", s1.num);
    return 0;
}