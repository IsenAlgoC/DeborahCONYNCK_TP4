#include <stdlib.h>
#include <stdio.h>
#define SEPARATEUR '/'
#define TAILLETAB1 20

int main() {
	int MyTab1[TAILLETAB1];
	for (int i = 0; i < 20; i++) {
		MyTab1[i] = i + 1;
		printf("%d%c", MyTab1[i], SEPARATEUR);
	}
	printf("\n");
	int* MyPtr1;
	for (MyPtr1 = &MyTab1[19]; *MyPtr1 > 0; MyPtr1--) {
		printf("%d%c", *MyPtr1, SEPARATEUR);
	}
}