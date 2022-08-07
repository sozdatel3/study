#include <stdio.h>

void * memmove( void * destptr, const void * srcptr, size_t num ){
    char* starii=(char*)destptr;
    char* novii=(char*)srcptr;
    for(int i=0; i<num;i++){
        novii[num-1-i]=straii[num-1-i];

    }
 return novii;   }
