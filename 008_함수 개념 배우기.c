//1~10까지의 합,1~100까지의 합, 1~1000까지의 합을 구하는 함수를 이용하여 프로그램을 작성하시오

#include <stdio.h>

int sum(int number); //함수 선언. sum이라는 이름의 함수에 number라는 변수를 사용하겠다.

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
