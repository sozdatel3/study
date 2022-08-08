#include <stdio.h>
int ft_tolower( int character ) {
    int totoupper=character;
    if (((character >=65)&&(character <=90))){
         totoupper=character+32;
       }
       return totoupper;
}
int main (){
    printf("%s",(char)ft_tolower(99));
    return 0;
}