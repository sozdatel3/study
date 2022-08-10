#include <stdio.h>

void* ft_memchr( const void* ptr, int ch, size_t count ){
    char r=(char)(ch+'0');
    char * whatinint=&r;
    char * ptrchr=(char*)ptr;
    char* pointer=NULL;
    size_t k = sizeof(whatinint);
    int n=0;
    int pointwhat=0;
    printf("%c",r);
    for (int i=0;i<count;i++){
    if (ptrchr[i]==whatinint[pointwhat]){
        n++;
        if (n==k){
            pointer=&ptrchr[i-k];
        }
    }
    pointwhat++;
    if (pointwhat==k){
        pointwhat=0;
    }
    else{
        n=0;
    } 
    
    }
return pointer;}


int main() {
    const char* y="Yaroslav petyx 1120";
    char* yp=(char*)y;
int v=112;
    // 1702132088
    // 112 101 116 121 120
    printf("%p",ft_memchr(yp,v,19));
    }
