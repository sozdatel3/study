#include <stdio.h>
int kach_sqrt (int number) {
    if (number < 0) {
        return -1;
    }
    for (int i = 1 ; i < number / 2; i++) {
        if ((i*i) == number) return i;
        i++;
    }
    return -1;
}

int main() {
    int number, res;
    if ((scanf("%d", &number) == 1) && (getchar() == '\n') && ((res = kach_sqrt (number)) != -1)) {
        printf("%d", res);
    } else {
        printf("n/a");
    }
    return 0;
}