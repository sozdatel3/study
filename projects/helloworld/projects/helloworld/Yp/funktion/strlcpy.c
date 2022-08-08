#include <stdio.h>

size_t strlcpy (char *dst, const char *src, size_t size){
    for (int i=0;i<size;i++) {
        if (i==size-1)
        { 
        dst[i]='\0';
        }
        else {
            dst[i]=src[i];
        }
    }
    int sizeoof=0;
    for (int q=0;;q++){
    sizeoof++;
    if (src[q]==0)
    break;
    }
    return sizeoof;
}