#include<stdio.h>
int main(void) {

  int a[5]={5,8,11};
  int i,s =0;

  for(i=2; i<4; i++){
    s+=a[i];
    printf("i= %d\n",i);
    printf("a[i]= %d\n",a[i]);
    printf("s= %d\n",s);
  }
    printf("%d\n",s);
}