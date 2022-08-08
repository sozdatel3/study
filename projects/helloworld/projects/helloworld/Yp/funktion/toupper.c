#include <stdio.h>
int toupper( int character ) {
    int totoupper=character;
    if (((character >=97)&&(character <=122))){
         totoupper=character-32;
       }
       return totoupper;
}
int main (){
    printf("%s",(char)toupper(99));
    return 0;
}