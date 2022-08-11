#include <stdio.h>
#include <string.h>

int ft_pow ( int x, int power){
int res=1;
for(int i=0;i<power;i++){
res=res*x;
}
return res;
}

int ft_atoi (const char *str){
char* strtochr=(char*)str;
int size=strlen(str);
int result=0;
int counter=0;
for(int i=0;i<size;i++){
    if ((strtochr[i]>='0')&&(strtochr[i]<='9')){
    counter++;
    }
    else {break;}
}
if(counter!=0){
    for (int k=0;k<counter;k++){

         result=result+(strtochr[k]-48)*(ft_pow(10,counter-k-1));}
}
return result;
}
const char* chek ="1488 Yaroslava obzivat ne brosim";

int main(){
int printres = ft_atoi(chek);
printf("%d",printres);
}