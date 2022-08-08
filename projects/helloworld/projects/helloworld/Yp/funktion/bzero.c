#include <stdio.h>

void bzero(void * s , size_t  n ){
    char* p = (char*)s;
    for(int i =0;i<n;i++){
        p[i]=0;
    }
}
