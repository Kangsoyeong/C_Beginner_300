//상수 TRUE를 1로 FALSE를 0으로 정의하고, if 문으로 조건을 판단하여 참, 거짓을 출력하는 프로그램을 작성하세요.

#include <stdio.h>
#define TRUE 1 //프로그램 종료까지 참(1)유지
#define FALSE 0 //프로그램 종료까지 거짓(0)유지

int main(void) {

	if (TRUE) {
		printf("TRUE의 값은 참입니다.\n");
	}
	else {
		printf("TRUE의 값은 거짓입니다.\n");
	}

	if (FALSE) { //if (!FALSE)라면 출력결과는 FALSE의 값은 참입니다. 라고 나올 것이다.
		printf("FALSE의 값은 참입니다.\n");
	}
	else {
		printf("FALSE의 값은 거짓입니다.\n");
	}

	return 0;

}