#include <stdlib.h>

char *addBinary(char *a, char *b) {
  size_t len_a = strlen(a);
  size_t len_b = strlen(b);

  size_t n = len_a > len_b? len_a:len_b;

  char *ans = (char*)malloc(sizeof(char) * (n + 2));
  *(ans + n + 1) = '\0';
  int carry = 0;
  for (int i = 0; i < n; i ++) {
    int p = 0;
    int q = 0;
    if (i < len_a) p = a[len_a - i - 1] - '0';
    else p = 0;

    if (i < len_b) q = b[len_b - i - 1] - '0';
    else q = 0;

    int tmp = p + q + carry;
    carry = temp / 2;
    *(ans + n - i) = temp % 2 + '0';
  }

  if (carry == 0) {
    return ans + 1;
  }
  else{
    *ans = '1';
    return ans;
  }
  
}
