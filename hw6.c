#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr1[6] = { 1, 2, 3, 4, 5, 6 };
	int arr2[6] = { 7, 8, 9, 10, 11, 12 };
	int* tptr = &arr1;
	int* bptr = &arr2;
	int i, temp;
	printf("arr1:");
	for (i = 0; i < 6; i++) {
		printf(" %d", arr1[i]);
	}
	printf("\narr2:");
	for (i = 0; i < 6; i++) {
		printf(" %d", arr2[i]);
	}
	for (i = 0; i < 6; i++) {
		temp = *tptr;
		*tptr = *bptr;
		*bptr = temp;
		*tptr++;
		*bptr++;

	}
	printf("\n\n");
	printf("after swap\n");
	printf("arr1:");
	for (i = 0; i < 6; i++) {
		printf(" %d", arr1[i]);
	}
	printf("\narr2:");
	for (i = 0; i < 6; i++) {
		printf(" %d", arr2[i]);
	}
}