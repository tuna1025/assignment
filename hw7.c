#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double get_SD(double data[]);
int main() {
	int i;
	double data[5];
	printf("Enter 5 real numbers: ");
	for (i = 0; i < 5; ++i) {
		scanf("%lf", &data[i]);
	}
	printf("\nStandard Deviation = %.3lf", get_SD(data));
	return 0;
}

double get_SD(double data[]) {
	double sum = 0.0, mean, SD = 0.0;
	int i;
	for (i = 0; i < 5; ++i) {
		sum += data[i];
	}
	mean = sum / 5;
	for (i = 0; i < 5; ++i) {
		SD += pow(data[i] - mean, 2);
	}
	return sqrt(SD / 5);
}
