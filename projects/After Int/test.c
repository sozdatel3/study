#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 char *solution(int n) {
    char* result = calloc(100 , sizeof(char));
    int value;
    int pow_ten;
    char one_unit [2];
    char five_unit [2];
    int size_of_n = 1;
    int like_n = n;
    while (like_n / 10 != 0) {
        size_of_n++;
        like_n /= 10;
    }
    pow_ten = size_of_n;
    like_n = n;
    printf("pow_ten = %d\n", pow_ten);
    for (int i = 0; i < size_of_n; i++) {
            value = like_n / pow(10, pow_ten-1);
            like_n -= value * pow(10, pow_ten-1);
        switch (pow_ten)
        {
        case 1:
            one_unit[0] = 'I';
            five_unit[0] = 'V';
            break;
        case 2:
            one_unit[0] = 'X';
            five_unit[0] = 'L';
            break;
        case 3:
            one_unit[0] = 'C';
            five_unit[0] = 'D';
            break;
        case 4:
            one_unit[0] = 'M';
            break;    
        default:
            break;
        }
        switch (value)
        {
        case 1:
            strcat(result, one_unit);
            break;
        case 2:
            strcat(result, one_unit);
            strcat(result, one_unit);
            break;
        case 3:
            strcat(result, one_unit);
            strcat(result, one_unit);
            strcat(result, one_unit);
            break;
        case 4:
            strcat(result, one_unit);
            strcat(result, five_unit);
            break;
        case 5:
            strcat(result, five_unit);
            break;
        case 6:
            strcat(result, five_unit);
            strcat(result, one_unit);
            break;
        case 7:
            strcat(result, five_unit);
            strcat(result, one_unit);
            strcat(result, one_unit);
            break;
        case 8:
            strcat(result, five_unit);
            strcat(result, one_unit);
            strcat(result, one_unit);
            strcat(result, one_unit);
            break;
        case 9:
            switch (pow_ten)
            {
            case 1:
                strcat(result, "IX");
                break;
            case 2:
                strcat(result, "XC");
                break;
            case 3:
                strcat(result, "CM");
                break;
            default:
                break;
            }
        case 0:
            break;
        default:
            break;
        }
        pow_ten--;
    }
  return ( char *)result;
}
int main () {
    /*char sentence[1000];
    char result[1000];*/
    int sentence;
    scanf("%d", &sentence);
    printf ("%s", solution(sentence));
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