#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int solve(int n) {
	if (n < 2) {
		printf("%d", n);
		return 0;
	}
	else
	{
		solve(n / 2);
		printf("%d", n % 2);
		return 0;
	}
}

int main() {
	int a;
	printf("2������ ��ȯ�� 10������ �Է��ϼ���: ");
	scanf("%d", &a);
	solve(a);
	
}