#include <stdio.h>
char * ft_strrchr( const char * string, int symbol){
    char *tostrchr=(char*)string;
    if (symbol==0){
    for(int i=0;;i++){
         if (tostrchr[i]==0){
         tostrchr=&tostrchr[i];
        break;
        }
        }    }
else {
       int q=0;
        while(tostrchr[q]) {
        if (tostrchr[q]==symbol){
         tostrchr=&tostrchr[q];}
        q++;
        }
}
       
return tostrchr;
}