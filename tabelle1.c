#include <stdio.h>

int main() {
	printf("Multiplikationstabelle fuer 1 - 10 :\n\n");
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			printf("%4d", i * j);
		}
		printf("\n");
	}
	getchar();
	return 0;
}