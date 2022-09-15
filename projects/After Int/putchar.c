#include <stdio.h>

void my_printf(char * string) {
    int i = 0;
    while (string[i] != '0') {
        putchar(string[i]);
        i++;
    }
}

int main() {
    char string [1000];
    string[0] = 0;
    int i = 0;
    for ( ; string[i-1] != '\n'; i++) {
        string[i] = getchar();
    }
    string[i] = '0';
    my_printf(string);
    return 0;
}