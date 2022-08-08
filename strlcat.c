#include <stdio.h>

size_t strlcat (char *dst, const char *src, size_t size) {
    size_t count=0;
    for (int i=0;;i++){
    if (dst[i]==0){
        break;
    }
    count++;
}
for (int q=0;q<size;q++){
    dst[count+q]=src[q];
}
    for (int i=count;;i++){
    if (dst[i]==0){
        break;
    }
    count++;}
    return count;
}
