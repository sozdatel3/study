#include <stdio.h>
void print_numbers() {
    char letter = '0';
    for (int i = 0; i < 10; i++){ 
    putchar(letter);
    letter++;
    }
}

int main() {
    print_numbers();
    return 0;
}