#include <stdio.h>
int unfactorial (int number) {
    if (number <= 0) return -1;
    int counter = 0;
    int i = 1;
    while (number != 1) {
        if ((number % i) != 0) {
            return -1;
        }
        number = number / i;
        i++;
        counter++;
    }
    return counter;
}

int main() {
    int number, res;
    if ((scanf("%d", &number) == 1) && (getchar() == '\n') && ((res = unfactorial (number)) != -1)) {
        printf("%d", res);
    } else {
        printf("n/a");
    }
    return 0;
}