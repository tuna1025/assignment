#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int hol(int a) {
	if (a % 2 == 1) {
		printf("%d ", a);
	}
	return 0;
}
int jjack(int a) {
	if (a % 2 == 0) {
		printf("%d ", a);
	}
	return 0;
}


int main() {
	int arr[5];
	printf("정수 5개를 입력하세요.:");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}
	printf("홀수 출력:");
	for (int i = 0; i < 5;i++) {
		hol(arr[i]);
	}
	printf("\n짝수 출력:");
	for (int i= 0; i < 5;i++) {
		jjack(arr[i]);
	}
}