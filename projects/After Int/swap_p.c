#include <stdio.h>
void swap_p(int * a, int * b) {
    int c = *a;
    *a = *b;
    *b = c;
}

int main() {
    int a = 0;
    int b = 10;
    swap_p(&a, &b);
    printf("%d\n%d", a , b);
    return 0;
}