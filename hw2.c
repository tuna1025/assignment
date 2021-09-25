#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	double km , mile;
	printf("Please enter kilometers:");
	scanf("%lf", & km);
	mile = 0.621 * km;
	printf("%.1f km is equal to %.1f mile", km, mile);

	return 0;
}