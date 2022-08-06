#include <stdio.h>

int ft_strlen(char* str) {  
    int counter = 0;
    while (str[counter]) {
        counter++;
    }        
    return counter;
}