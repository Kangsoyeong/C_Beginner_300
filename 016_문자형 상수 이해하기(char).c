//문자형 상수 HUNDRED를 정의하고  HUNDRED의 값을 100대신에 사용하는 프로그램을 작성 하세요.

#include <stdio.h>
#define HUNDRED 100

int main(void) {

	printf("%d", HUNDRED);

	return 0;

}

//#define을 통해 매크로 상수를 정의하고 있다. 예제를 보면 해당 매크로가 매크로 몸체로 그대로 치환된다는 것을 알 수 있다.