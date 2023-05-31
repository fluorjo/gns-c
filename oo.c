#include<stdio.h>
int subm(int n) {

  if(n<=1)
    return 1;
  else
    return n+subm(n-2);
}

int main(void)
{
  int v=1;
  printf("%d\n",subm(v));
}