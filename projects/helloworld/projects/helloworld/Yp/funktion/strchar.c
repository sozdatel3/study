#include <stdio.h>
char * ft_strchr( const char * string, int symbol){
    char *tostrchr=(char*)string;
    for(int i=0;;i++){
        if (tostrchr[i]==symbol){
         tostrchr=&tostrchr[i];
        break;
        }

        if (tostrchr[i]==0){
            return 0;
        break;}
    }
return tostrchr;
}