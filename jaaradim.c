#include <stdio.h>
void main() {
	int n;
	printf("Unesite broj: ");
	scanf_s("%d", &n);
	if (n % 2 == 0) {
		printf("Broj je paran.\n");
	} else
		printf("Broj je neparan.\n");
	}
