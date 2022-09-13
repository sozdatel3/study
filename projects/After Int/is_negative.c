#include <stdio.h>
void is_negative() {
    int user_int;
    if ((scanf("%d", &user_int) != 1) || (getchar() != '\n')) { 
        printf("n/a");
    } else { 
    if (user_int < 0) {
        printf("N");
    } else {
        printf("P");
    }
    }
}

int main() {
    is_negative();
    return 0;
}