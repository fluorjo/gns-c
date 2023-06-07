#include <stdio.h>
#include <string.h>

int main(void) {

  char a[]="abcde";
  char b[]="12345";

  strcat(a,b);
  puts(a);
  printf("%s",b);
}

