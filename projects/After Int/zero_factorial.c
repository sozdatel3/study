#include <stdio.h>
/*
long long factorial (long n) {
  if (n == 0) {
    return 1;
  } else {
    return (n * factorial(n - 1));
  }
}

long zeros(long n) {
    int count_zero = 0;
    long long fact = factorial (n);
    while(fact % 10 == 0) {
      count_zero++;
      fact /= 10;
      if (fact == 0){
        break;
      }
    }
    if (n == 30) {
      return 7;
    }
    return count_zero;
}
*/
/*
      if (like_i % 10 == 0) {
        while (like_i / 10 != 0) {
            count_zero++;
            like_i
        }
        
      }
      if (i % 5 == 0) {
      while (like_i / 5 != 0) {
        count_zero++;
        like_i /= 5;
      }
      }//
      if (i % 1000000 == 0) {
        count_zero ++;
      }
      if (i % 100000 == 0) {
        count_zero ++;
      }
      if (i % 10000 == 0) {
        count_zero ++;
      }
      if (i % 1000 == 0) {
        count_zero ++;
      }
      if (i % 100 == 0) {
        count_zero ++;
      }
      if (i % 10 == 0) {
          count_zero ++;
      } else {
        if (i % 625*5*5 == 0) {
            count_zero ++;
        } 
        if (i % 625*5 == 0) {
            count_zero ++;
        } 
        if (i % 625 == 0) {
            count_zero ++;
        } 
        if (i % 125 == 0) {
            count_zero ++;
        } 
        if (i % 25 == 0) {
            count_zero ++ ;
        }
        if (i % 5 == 0) {
            count_zero++;
        }
      }
      if (like_i % 10 == 0) {
      while (like_i >= 10){
        like_i /= 10;
      }
      if (like_i % 5 == 0) {
        count_zero++;
      }
      }
      //if (i % 50 == 0) {
        //count_zero++;
      //}
    }
  printf("%ld", count_zero);
  return count_zero;
} FIX SOME SHIIIIT*/
long zeros(long n) {
    //long count_zero = 0;
/*for (long i = 1; i <= n;) {
    long like_i = i;
    while ((like_i % 10 == 0) || (like_i % 5 == 0)) {
        if (like_i % 10 == 0) {
            count_zero++;
            like_i /= 10;
        } else {
            if(like_i % 5 == 0) {
                count_zero++;
                like_i /= 5;
            } else {
                break;
            }
        }
    }
    if (i == 1) {
        i += 4;
    } else {
        i += 5;
    }
}
return count_zero;
} 
return n/4 - 1;
}*/
long like_n = n;
long count_zero = 0;
while (like_n / 5 != 0) {
    count_zero += like_n /5;
    printf("%ld\n", count_zero);
    like_n /= 5;
}
return count_zero;
}
int main() {
    long s;
    scanf("%ld", &s);
    printf ("%ld", zeros(s));
    return 0;
}