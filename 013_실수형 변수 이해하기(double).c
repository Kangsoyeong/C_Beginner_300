//실수형 변수 d를 정의하고 3.141592를 대입하는 프로그램을 작성하세요.

#include <stdio.h>
int main(void) {

	float d; //double d;
	d = 3.141592;

	printf("%f", d);

	return 0;

}

//유효자릿수 : float-7자리(4바이트), double-15자리(8바이트).
//float의 정밀도보다 더 높은 정밀도가 필요하다면 double을 사용해야 한다.