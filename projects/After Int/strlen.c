#include <stdio.h>

int my_strlen (char * str) {
    int counter = 0;
    for (int i = 0; str[i] != '0'; i++) {
        counter++;
    }
    return counter - 1;
}

int main() {
    char str [1000];
    for (int i = 0; i < 1000; i++) {
        str[i] = '0';
    }
    
    scanf("%s", str);
    printf("%d", my_strlen(str));
    return 0;
}