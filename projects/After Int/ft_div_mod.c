#include <stdio.h>
void fdiv_mod(int a, int b, int * divp,  int * modp) {
    if (b == 0) {
        printf("n/a");
    } else {
        *divp =(int) (a / b);
        *modp = a % b;
    }
}

int main() {
    int a, b, div = 0, mod = 0;
    char chek;
    int * divp = &div;
    int * modp = &mod;
    if ((scanf("%d%c%d", &a, &chek, &b) == 3) && ((chek != ' ') ||
    (chek != '\n')) && (getchar() == '\n')) {
        fdiv_mod(a, b, divp, modp);
        printf("div = %d\nmod = %d", div, mod);
    } else {
        printf("n/a");
    }
    return 0;
}