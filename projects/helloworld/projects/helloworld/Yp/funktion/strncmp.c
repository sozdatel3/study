#include <stdio.h>

int ft_strncmp( const char * string1, const char * string2, size_t num ){
    char* str1=(char*)string1;
    char* str2=(char*)string2;
    int compaer=0;
    for (int i =0;i<num;i++){
     if (str1[i]==str2[i]) {
        continue;     }
     else{
        if (str1[i]>str2[i]){
            compaer=2;
            break;
        }
        if (str1[i]<str2[i]){
            compaer=-2;
            break;
            }
    }
    }
    return compaer;

}

int main(){
  const char b= 'Irik pidr';
  const char m=  'Irik ne pidr';
const char * y=&b;
const char * n=&m;
int h=ft_strncmp(y,n,6);
printf("%d",h);
}
