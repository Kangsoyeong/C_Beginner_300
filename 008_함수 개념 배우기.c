//1~10까지의 합,1~100까지의 합, 1~1000까지의 합을 구하는 함수를 이용하여 프로그램을 작성하시오

#include <stdio.h>

int sum(int number); //함수 선언. sum이라는 이름의 함수에 number라는 인수를 사용하겠다.

int main(void) {

	printf("1부터 10까지의 합은 %d\n", sum(11)); //number에 11을 대입한다.
	printf("1부터 10까지의 합은 %d\n", sum(101)); //number에 101을 대입한다.
	printf("1부터 10까지의 합은 %d\n", sum(1001)); //number에 1001을 대입한다.

}

int sum(int number) { //함수 구현

	int i; //변수 i 선언
	int j = 0; //1씩 증가되는 i를 j에 더해주기 위해 j를 0으로 초기화.

	for (i = 0; i < number; i++) { //i가 number보다 작을때까지 i를 증가시킨다.
		j += i; //j에 i를 더한것을 j에 적용시킨다.
	}

	return j;
}

/*
* 
1. 함수의 종류
-라이브러리 함수
stdio.h파일 안에 정의되어있는 printf(), scanf()와 같은 함수이다.

-사용자 정의 함수
사용자가 원하는 대로 정의하는 함수이다. 보통 함수의 특성을 살려 이름을 짓는다.

2. 함수의 사용법
함수는 main()위에 선언해주어야 한다.

-선언과 구현을 나누어서 코드 작성
#include <stdio.h>

int add(int a, int b); //선언

int main()
{
	return 0;
}

int add(int a, int b) //구현
{
	return (a + b);
}

-선언과 동시에 구현
#include <stdio.h>

int add(int a, int b) //56~59 선언 + 구현
{
	return (a + b);
}

int main()
{
	return 0;
}

-함수의 호출
#include <stdio.h>

int add(int a, int b); //함수 선언

int main()
{
	int num1 = 3;
	int num2 = 4;
	int result;

	result = add(num1, num2); //1. line 83과 연결되는 함수 호출 & 인수 전달 / 3. line 84에서 값을 반환받아 result에 값 대입

	result 0;
}

int add(int a, int b)
{
	return (a + b); //2. 계산 후 line 77에 반환
}

*/
