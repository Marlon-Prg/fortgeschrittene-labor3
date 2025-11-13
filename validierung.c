#include <stdio.h>

int main() {
	int zahl = 1;

	do {
		printf("\nGib eine Zahl ein zwischen 1-100!: ");
		scanf_s("%d", &zahl);
		if (zahl >= 1 && zahl <= 100) {
			printf("\nGueltige Eingabe! Zahl: %d", zahl);
		}
		else if(zahl < 1 || zahl > 100){
			printf("\nUngueltige Eingabe!");
		}
	} while (zahl < 1 || zahl > 100);
	return 0;
}