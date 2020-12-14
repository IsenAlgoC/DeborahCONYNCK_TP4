#include <stdlib.h>
#include <stdio.h>
#include "tp4.h"

int main() {
	HEURE HeureDebut;
	int HeureDebut_heure = 12;
	int HeureDebut_minute = 30;
	HEURE HeureFin;
	HEURE Duree;
	int Duree_heure = 00;
	int Duree_minute = 45;
	int HeureFin_heure = HeureDebut_heure + Duree_heure;
	int HeureFin_minute = HeureDebut_minute + Duree_minute;
	if (HeureFin_minute > 59) {
		HeureFin_heure += 1;
		HeureFin_minute = HeureFin_minute % 60;
	}
	printf("Heure de fin : %d:%d", HeureFin_heure, HeureFin_minute);
}