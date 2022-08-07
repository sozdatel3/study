#include <stdio.h>

void memset (void *destination, int c, size_t n) {
char a[sizeof(size_t)];
a="(*(char*)destination)";
for (int i=0;i<n;i++) {
    a[i]=c;
}
}

