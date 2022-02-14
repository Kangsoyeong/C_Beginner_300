//문자형 변수를 여러 개 정의하고 200, 'a'를 대입하는 프로그램을 작성하세요.

#include <stdio.h>
int main(void) {

	char a, b;
	unsigned char c;

	a = 200;
	b = 'a';
	c = 200;

	printf("%d %c \n", a, b); //실행결과 : -56 a -> char형변수는 1바이트이므로 -128~127 까지의 수만 저장 가능하다.
	printf("%d", c); //실행결과 : 200 -> unsigned char의 변수 c는 부호비트 없이 양수로만 쓰이기 때문에 0부터 255까지 담을 수 있다.

	return 0;
}