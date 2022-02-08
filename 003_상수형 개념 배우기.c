//정수형 상수 1과 실수형 상수 3.141592를 더하는 프로그램을 작성하시오.

#include <stdio.h>

#define X 1
#define PI 3.141592
int main(void) {

	double z;
	z = X + PI;

	printf("%f", z);
	return 0;
}

//상수 : 값을 변경할 수 없는 변수
//아래의 코드도 동일한 결과를 출력한다.

/*
#include <stdio.h>
int main(void) {

	int a = 1;
	float b = 3.141592;
	float c = a + b;
	printf("%f", c);

	return 0;
}
*/