#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool CharOuPas(char c) {
	if ((c > 64 && c < 91) || (c > 96 && c < 123) || (c > 127 && c < 155)) {
		return true;
	}
	else { return false; }
}

int main() {
	char buffer[1024];
	int NbrChar = 0;
	int NbrMots = 0;
	printf("Entrez votre phrase et finissez par un point: ");
	gets_s(buffer, 1024);
	printf("\n%s", buffer);
	int Taille = strlen(buffer);
	for (int i = 0; i < Taille; i++) {
		if (CharOuPas(buffer[i]) == true) {
			if (i != 0 && CharOuPas(buffer[(i - 1)]) == false) {
				NbrMots += 1;
			}
			NbrChar += 1;
		}
	}
	printf("Mots: %d Characteres: %d", NbrMots, NbrChar);
}