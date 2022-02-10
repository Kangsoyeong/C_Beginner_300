//1부터 10까지의 합을 구하는 프로그램을 작성하세요.

#include <stdio.h>
int main(void) {

    int i;
    int sum = 0;

    for (i = 1; i < 11; i++) {
        sum += i;
    }
    printf("1부터 10까지의 합 = %d", sum);

    return 0;
}