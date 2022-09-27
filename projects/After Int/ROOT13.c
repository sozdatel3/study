#include <stdio.h>
#include <stdlib.h>
char *rot13( char *src)
{
  for (int i = 0; src[i] != 0; i++) {
    if ((src[i] >= 65 ) && (src[i] <= 90)) {
        if (src[i] + 13 > 90) {
            src [i] = src[i] + 13 - 26;
        } else {
            src[i] += 13;
        }
    }
    if((src[i] >= 97) && (src[i] <= 122)) {
        if (src[i] + 13 > 122) {
            src [i] = src[i] + 13 - 26;
        } else {
            src[i] =src[i] + 13;
        }
    }
  }
    return NULL;
}
int main () {
    /*char sentence[1000];
    char result[1000];*/
    char sentence[100];
    scanf("%s", sentence);
    printf("%d", sentence[0]);
    rot13(sentence);
    printf("%s", sentence);
    /*char * res = solution(sentence);
    while (res[i] != '\0')
    {
        printf("%c", res[i]);
        i++;
    }
    */
    //printf ("%s", solution(sentence));
   // printf ("%d", "V" == solution(sentence));
    return 0;
}
// 15241383936l
/* 
I          1
V          5
X          10
L          50
C          100
D          500
M          1,000*/