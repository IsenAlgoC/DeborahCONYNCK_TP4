#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#define TAILLEMOT 50

int main() {
	char Sexe;
	printf("Entrez H/F/I selon votre genre: ");
	Sexe = _getch();
	char Nom[TAILLEMOT];
	char Prenom[TAILLEMOT];
	printf("\nNom: ");
	scanf_s("%s", Nom, _countof(Nom));
	printf("\nPrenom: ");
	scanf_s("%s", Prenom, _countof(Prenom));
	switch (Sexe) {
	case 'H':
		printf("\nMr %s %s", Nom, Prenom);
		break;
	case 'F':
		printf("\nMme %s %s", Nom, Prenom);
		break;
	case 'I':
		printf("\nMx %s %s", Nom, Prenom);
		break;
	default:
		break;
	}
}