#include <stddef.h>
#include <stdlib.h>
void move_zeros(size_t len, int arr[len]) {
  int count_zero = 0;
  int count_no_zero = 0;
  if(len == 0) {
    exit(0);
  }
  for (size_t i = 0; i < len; i++) {
    if (arr[i]) {
      count_no_zero++;
    }
  }
  if (count_no_zero) {
  for (size_t i = 0; i < len; i++) {
    if (!(arr[i])) {
      count_zero++;
      for (size_t j = i; j < len - 1; j++) {
        arr[j] = arr[j+1];
      }
      i--;
    }
  }
  for (size_t i = len - count_zero; i < len; i++) {
    arr[i] = 0;
  }
  }
}
