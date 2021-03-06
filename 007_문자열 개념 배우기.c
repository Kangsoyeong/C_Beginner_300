//"대한민국"을 출력하는 프로그램을 작성하세요.

#include <stdio.h>
int main(void) {

	printf("대한민국"); //puts("대한민국");

	return 0;
}

//puts() vs printf()

/*
 [공통점]
 두 함수를 모두 전처리 지시자 #include로 헤더 파일 <stdio.h>를 입력해야 한다.
 헤더 파일 <stdio.h>에는 표준 입출력 함수를 위한 함수 원형이 들어있다.
 printf(), puts()는 모두 출력함수이기 때문에 <stdio.h>가 필요한 것이다.

 [차이점]
 -puts()
 오직 문자열(string)만 출력하는 역할이다.
 문자열 출력 후 줄 바꿈을 시전 한다는 특징이 있다.
 이 특징을 활용해 공백 문자열을 출력하는 puts("");를 만들면 한 줄을 비울 수 있다.
 printf("\n");보다 puts("");가 한 줄 비울 때 더 빠르기 때문에 자주 사용한다.

 -printf()
 문자열 및 다양한 정보를 서식화 하여 출력하는 함수다.
 puts()는 단순히 문자열만을 출력하는데 그쳤다면, 
 printf()는 문자열뿐만 아니라 정수, 실수, 문자를 출력할 수 있다. 
 puts()가 할 수 있는 기능을 포함하여 더 많은 정보를 출력할 수 있으므로 
 printf()는 사실상 puts()의 상위 호환이다.
 printf()는 문자열 출력 후 줄 바꿈을 하지 않는다.
 따라서 puts()처럼 문자열 출력 후 줄 바꿈을 하고 싶다면 제어 문자 \n을 큰 따옴표 안에 넣어야 한다.
 줄 바꿈의 관점에서 [puts(""); = printf("\n");] 둘은 같은 기능을 한다고 볼 수 있다.
*/