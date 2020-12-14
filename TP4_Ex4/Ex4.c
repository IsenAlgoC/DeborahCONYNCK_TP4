#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>
#define TAILLEMOT 50

bool CharOuPas(char c) {
	if ((c > 64 && c < 91) || (c > 96 && c < 123)) {
		return true;
	}
	else { return false; }
}

int main() {
	setlocale(LC_ALL, "FR-fr");
	unsigned char Mot[TAILLEMOT];
	int B = 0;
	int i = 0;
	char MotSansAccents[TAILLEMOT];
	printf("Mot: ");
	scanf_s("%s", Mot, _countof(Mot));
	int Taille_Mot = strlen(Mot);
	int Taille_MotSansAccents = 0;
	for (int n = 0; n < Taille_Mot; n++) {
		if ((Mot[n] > 64 && Mot[n] < 91) || (Mot[n] > 96 && Mot[n] < 123)) {
			MotSansAccents[i] = toupper(Mot[n]);
			i += 1;
			Taille_MotSansAccents += 1;
		}
		else if (Mot[n] > 127 && Mot[n] < 166) {
			MotSansAccents[i] = Mot[n];
			i += 1;
			Taille_MotSansAccents += 1;
		}
	}
	int d = 0;
	Taille_MotSansAccents -= 1;
	while (B == 0 && d < Taille_MotSansAccents) {
		if (MotSansAccents[d] == MotSansAccents[Taille_MotSansAccents]) {
			d += 1;
			Taille_MotSansAccents -= 1;
		}
		else { B = 1; }
	}
	if (B == 1) {
		printf("%s n'est pas un palindrome", Mot);
	}
	else {
		printf("%s est  un palindrome", Mot);
	}
}