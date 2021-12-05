#include <stdio.h>
struct City
{
	char city[20]; 
	char contury[20]; 
	int population; 
};
int main(void) {
	struct City arr[3];
	int i;
	printf("Input three cities:\n");
	for (i = 0; i < 3; i++) {
		printf("Name> ");
		scanf_s("%s", arr[i].city, sizeof(arr[i].city));
		printf("Country> ");
		scanf_s("%s", arr[i].contury, sizeof(arr[i].contury));
		printf("Population > ");
		scanf_s("%d", &arr[i].population);
	}
	printf("\nPrinting the three cities:\n");
	for (i = 0; i < 3; i++) {
		printf("%d. %s in %s with a population of %d people\n", i+1, arr[i].city, arr[i].contury, arr[i].population);
	}
	return 0;
}