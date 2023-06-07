#include<stdio.h>
int main(void) {

  int num1=16, num2=44;
  int a = num1++;
    printf("%d\n",a);
    printf("%d\n",num1);
  int b = --num2;
    printf("%d\n",b);
    printf("%d\n",num2);
    printf("%d\n",a+b);
}