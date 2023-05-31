#include<stdio.h>
int main(void) {
  int a,b,c;
  a=5;
  b=a<<1;
  printf("%d,%d",a,b);
  c=b%3|a+1;
  printf("%d",c);

}