#include <stdio.h>

//Summieren der eingegeben Zahlen bis 0 eingegeben wird
int main() {
	int summe = 0;
	int zahl = 1;

	printf("Geben sie beliebig oft Zahlen ein die summiert werden sollen!\nUm die Summe auszugeben geben sie 0 ein!");

	while (zahl != 0) {
		printf("\nZahl: ");
		scanf_s("%d", &zahl);

		if (zahl != 0) {
			summe += zahl;
		}
	}
	printf("\nSumme: %d", summe);
	return 0;
}