#include <stdio.h>
#include <string.h>

char * ft_strnstr (const char * s1, const char * s2, size_t len){
char* ss1 = (char*)s1;
char* ss2 = (char*)s2;
int k = 0;
int size2 = strlen(ss2);
char* ptr=NULL;
if (s2[0]==0){
    return (char*)s1;
}

for(int i=0;i<len;i++){
if (ss1[i]==ss2[k]){
    k++;
    if (k==size2-1){
        ptr=&ss1[i-k];
        break;
    }  
}
else {if(k!=0) {
    i=i-1;
}
    k=0;
}
}
return ptr;
}

const char Y[20]="Yarik lox";
const char L[5]="lox";
int main(){
ft_strnstr(Y,L,20);
printf("%p",ft_strnstr(Y,L,20));
}
