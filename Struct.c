#include <stdio.h>

struct product {
	int sku;
	double price;
};

int main() {
	int i;
	struct product product[] = {
		  {2156, 2.34}, {4633, 7.89},
		  {3122, 6.56}, {5611, 9.32} };
	const int n = 4;
	printf("Sku price:\n");
	for (int i = 0; i < n; i++) {
		printf("%5d  $%.2lf\n", product[i].sku, product[i].price);
	}
}