#include <stdio.h>

void* ft_memset (void *destination, int c, size_t n) {
    char* p=(char*)destination;
for (int i=0;i<n;i++) {
    p[i]=c;
}
    void * k = p;
    return k;
}



