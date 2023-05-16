#include <stdio.h> 
//#기호는 전처리기. 컴파일 '전'을 의미.
//stdio.h를 이 코드 파일에 포함시키겠다는 뜻.
//소스 코드를 기계어로 번역하기 전에, stdio.h라는 헤더를 포함해 컴파일 하겠다. 그래서 stdio.h가 내포함 함수들을 쓰겠다. 

int main(void) {
  printf("Hello World\n");//명령줄 ;로 끝 표시.
  //\n으로 줄바꿈하는 거 꼭 챙기기. 
  return 0;
}//중괄호 닫아서 프로그램의 끝을 알림.