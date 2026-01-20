#include <stdio.h>
void main() {
	int n;
	printf("Unesite broj: ");
	scanf_s("%d", &n);
	if (n % 2 == 0) {
		printf("Broj je paran.\n");
	} else
		// ovde ti fale viticaste zagrade, ako hoces da budes konzistentan
		// iza if imas, a iza else nemas, to nije konzistento
		// radi i bez njih, zato sto imas samo jednu liniju
		// ali ako bi ih bilo vise, mora da budu oklopljene sa viticastim zagradama
		printf("Broj je neparan.\n");
	// ovo nije dobro formatirano, ova viticasta zagrada treba da bude na pocetku linije
	// pre nego sto push-ujes mozes da uradis CTRL+A, CTRL+D da ti VS lepo formatira code
	}
