//��� TRUE�� 1�� FALSE�� 0���� �����ϰ�, if ������ ������ �Ǵ��Ͽ� ��, ������ ����ϴ� ���α׷��� �ۼ��ϼ���.

#include <stdio.h>
#define TRUE 1 //���α׷� ������� ��(1)����
#define FALSE 0 //���α׷� ������� ����(0)����

int main(void) {

	if (TRUE) {
		printf("TRUE�� ���� ���Դϴ�.\n");
	}
	else {
		printf("TRUE�� ���� �����Դϴ�.\n");
	}

	if (FALSE) { //if (!FALSE)��� ��°���� FALSE�� ���� ���Դϴ�. ��� ���� ���̴�.
		printf("FALSE�� ���� ���Դϴ�.\n");
	}
	else {
		printf("FALSE�� ���� �����Դϴ�.\n");
	}

	return 0;

}