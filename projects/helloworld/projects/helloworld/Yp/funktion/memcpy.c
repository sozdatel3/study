#include <stdio.h>

void memcpy (void *destination, const void *source, size_t n){
char* starii=(char*)source;
char* novii=(char*)destination;
for(int i=0;i<n;i++){
    novii[i]=starii[i];
}

}