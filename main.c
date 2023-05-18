#include <stdio.h> 
//#기호는 전처리기. 컴파일 '전'을 의미.
//stdio.h를 이 코드 파일에 포함시키겠다는 뜻.
//소스 코드를 기계어로 번역하기 전에, stdio.h라는 헤더를 포함해 컴파일 하겠다. 그래서 stdio.h가 내포함 함수들을 쓰겠다. 


int main(void) {
  printf("Hello World\n");//명령줄 ;로 끝 표시.
  //\n으로 줄바꿈하는 거 꼭 챙기기. 
  printf("%d %d \n", 10, 20);
  printf("%d %d %d \n", 10, 20);
  printf("Good \nmorning \neverybody\n");

  int a=30;
  int b=a*2;
  printf("%d\n", a/b);
  printf("%f\n", (double)a/(double)b);


  //3강
  printf("선 연산 후 증가 : %d\n", a++);
  printf("다시 a 출력해야 증가됨 : %d\n", a);
  
  printf("선 증가 후 연산 : %d\n", ++a);
  printf("다시 a 출력하면 위와 동일. : %d\n", a);

  int c=10;
  printf("%d\n", c);
  int d=(c--)+2;
  printf("%d\n", d);
  printf("%d\n", c);
  
  //4강
  int e=3,f=3;
  printf("4강 논리연산자: %d\n", !(++e!=f));

  //5강
  if(e==4)
  {
    printf("e는 %d\n",e);
  }
  else if(e==5)
  {
    printf("e는 5");
  }
  else
  {
    printf("그 외 조건");
  }
  int e2;
  e2=(e==4)? 99:22;
  printf("%d\n",e2);
  printf("e랑 e2 중 큰 값은 %d\n",(e>e2)?e:e2);

  //6강
  int switchvar=11;
  switch(switchvar)
  {
    case 10:
      printf("스위치값은 10\n");
    case 11:
      printf("스위치값은 11\n");
    break;
    default:
      printf("스위치값은 10도 11도 아닌 무언가\n");
  }

  //7강
  int whilevar=1, sum1=0;
  while(whilevar<=10){
    sum1+=whilevar;
    whilevar++;
  }
  printf("1부터 10까지의 합 = %d\n",sum1);
  
  return 0;
}//중괄호 닫아서 프로그램의 끝을 알림.