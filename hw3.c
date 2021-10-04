#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int num, a, b = 0;
	printf("please enter a number: ");
	scanf("%d", &num);
	for (a = 1; a < num; a++) {
		if (num % a == 0) {
			b++;
		}
		
	}
	if (b == 0) {
		printf("It is not a prime number.");
	}
	else
	{
		printf("It is a prime number.");
	}
}