#include <stdio.h>
#include <string.h>

char * ft_strnstr (const char * s1, const char * s2, size_t len){
char* ss1 = (char*)s1;
char* ss2 = (char*)s2;
int n = 0;
int size2 = strlen(ss2);
char* ptr=NULL;
if (s2[0]==0){
    return (char*)s1;
}

for(int i=0;i<len;i++){
    int stopfor=0;
    if (stopfor==1) {break;}
    for(int k=0;k<size2;k++){
    if (ss1[i+k]==ss2[k]){
        n++;
        if (n==size2-1){
            ptr=&ss1[i];
            stopfor=1;
            break;
        }
    }
    else { n=0;}
    }

}
return ptr;
}

const char Y[20]="llllox";
const char L[5]="i";
int main(){
ft_strnstr(Y,L,20);
printf("%p",ft_strnstr(Y,L,20));
return 0;
}
