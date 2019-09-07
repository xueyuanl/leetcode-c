#include <stdlib.h>

int lengthOfLastWord(char *s) {
  int len = 0;

  while (*s) {
    while (*s == ' ') s ++; // skip spaces
    if (*s) {
      len = 0;
      while (*s && *s != ' ') {
	s ++;
	len ++;
      }
    }
  }
  
  return len;
}
