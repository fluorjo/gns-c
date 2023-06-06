#include <stdio.h> 
//#기호는 전처리기. 컴파일 '전'을 의미.
//stdio.h를 이 코드 파일에 포함시키겠다는 뜻.
//소스 코드를 기계어로 번역하기 전에, stdio.h라는 헤더를 포함해 컴파일 하겠다. 그래서 stdio.h가 내포함 함수들을 쓰겠다. 

//다른 파일 함수 불러오기
#include "ff.h"


//15강 - 사용자 함수 - 1. 일단 사용자 함수 선언부터 먼저 해준다.
int Add(int a, int b);

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

  //8강
  int a8=0,b8=0,c8=0;
  while(c8<5)
    {
     while(b8<4)
     {
      b8++;
      printf("현재 c8 값은 %d\n",c8);
      printf("현재 b8 값은 %d\n",b8);
     }
      a8+=b8;
      c8++;
      printf("현재 c8 값은 %d\n",c8);
      printf("현재 a8 값은 %d\n",a8);
    }
  printf("a8 값은 %d\n",a8);

  //9강 - do - while문
  int a9=0,b9=1;
  do{
    a9+=b9;
    b9=b9+1;
  }while(b9<=3);
  printf("a9의 값은 %d\n",a9);

  //10강 for문
  int a10;
  for(a10=0 ; a10<2 ; a10++)
  {
    printf("a10의 값은 %d\n",a10);
  }

  //11강 다중 for문
  int a11, b11;
  for(a11=0; a11<3; a11++)
  {
    printf("----현재 a11은 %d \n",a11);
    for(b11=0; b11<2; b11++)
      {
        printf("현재 b11은 %d \n",b11);
      }
  }
  //12강 break, continue

  int a12=0;
  while(1)
    {
      a12++;
      printf("a12는 %d\n",a12);
      if(a12>3)
        break;
    }

  int a122, s122=0;
  for (a122=1; a122<=10; a122++)
    {
      if(a122%2 != 0)
        continue;
      s122+=a122;
    }
  printf("1부터 10까지의 짝수합=%d\n",s122);
  
  //13,14강 배열
  int array [5];
  array[0]=0;
  array[1]=99;
  printf("%d\n",array[1]);

  char str[]={"asdfg"}; //배열 크기 지정 안함-끝에 null 문자 들어감.
  printf("문자배열의 크기는 %d\n",sizeof(str));
  char str2[8]={"asdfg"}; //배열 크기 지정하면 지정한 값으로 됨. 
  printf("문자배열의 크기는 %d\n",sizeof(str2));
  char str3[5]={"a","s","d","f","g"}; //문자열 크기 지정 후 한 글자씩 넣으면 그 크기로 됨. 
  printf("문자배열의 크기는 %d\n",sizeof(str3));

  int sl;
  char ch13;
  char str13[6]="abcde\n";
  printf("변경 전 문자열 \n");
  printf("%s \n", str13);

  for(sl=0; sl<6; sl++)
    printf("%c | \n",str13[sl]);

  for(sl=0; sl<3; sl++)
    {
      ch13=str13[4-sl];
      str13[4-sl]=str13[sl];
      str13[sl]=ch13;
    }

  printf("변경 후 문자열 \n");
  printf("%s \n", str13);

  //2차원 배열
  int s14[3][3]
={{1,2,3},{4,5,6},{7,8,9}};

  int i14,j14;
  for(i14=0; i14<3; i14++)
    {
      for(j14=0;j14<3;j14++)
        {
         printf("\t %d",s14[i14][j14]);     
        }
      printf("\n");
    }
  
//15강 - 사용자 함수 - 2.함수 사용

  int a15;
  a15=Add(4,5);
  printf("%d \n",a15);

//다른 파일 함수 불러오기
  int resultff=fff(22,22);
  printf("다른 파일에서 함수 불러옴 %d \n",resultff);

  int aaa=5, bbb=7, ccc,ddd,eee,fff;
  ccc=aaa&bbb;
  ddd=aaa|bbb;
  eee=aaa^bbb;
  fff=~bbb;
  aaa=aaa>>1;
  bbb=bbb<<3;
  printf("%d,%d,%d,%d,%d,%d\n",aaa,bbb,ccc,ddd,eee,fff);

  //포인터 - 기출문제.
  int nn1=200;
  int nn2=300;
  int *nx1=&nn1;
  int *nx2=&nn2;
  *nx1 +=40;
  *nx2 -=50;
  printf("%d, %d",nn1,nn2);
  
  return 0;
  
}//중괄호 닫아서 프로그램의 끝을 알림.

//15강 - 사용자 함수 - 3. 함수 정의. 위에서 선언해 줬으면 이렇게 메인 함수 다음에 작성 가능.
//단 메인 함수를 닫은 다음에 해줘야 하는 거 주의.
int Add(int a, int b) 
{
  int result = a+b;
  return result;
}


