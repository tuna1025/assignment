#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int num1, num2;
	printf("두정수를 입력하세요:");
	scanf("%d%d", &num1, &num2);
	printf("%d & %d = %d\n", num1, num2, num1 & num2);
	printf("%d | %d = %d\n", num1, num2, num1 | num2);
	printf("%d ^ %d = %d\n", num1, num2, num1 ^ num2);
	
	return 0;
}
