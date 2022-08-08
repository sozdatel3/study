#include <stdio.h>

int FT_strncmp( const char * string1, const char * string2, size_t num ){
    char* str1=(char*)string1;
    char* str2=(char*)string2;
    int sravnitel=0;
    for (int i =0;i<num;i++){
        if ((str1[i]==0)&&(str2[i]!=0)){
            sravnitel=-2;
            break;
        }
        if ((str1[i]!=0)&&(str2[i]==0)){
            sravnitel=2;
            break;
        }

    }
    return sravnitel;

}

