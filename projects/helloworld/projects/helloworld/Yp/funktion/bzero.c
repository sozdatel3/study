#include <stdio.h>

void bzero(void * s , size_t  n ){
    char* p = (char*)s;
    for(int i =0;i<n;i++){
        p[i]=0;
    }
}

int main(){
    char Yar[20]="Yaril petyx";
void* Ya=&Yar;
bzero(Ya,8);
printf ("%s",Yar);
return 0;
}