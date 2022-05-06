#include <stdio.h>


int main() {
    int a = 100;
    printf("%5d - %p\n", a, &a);
    int b = 50;
    printf("%5ld bit - %p\n", sizeof(b), &b);
}