#include <stdio.h>

int main() {
	int vet_r[5];
	for (int i = 0; i < 5; i++) {
		vet_r[i] = i;
	}

	int vet_s[10];
	for (int i = 0; i < 10; i++) {
		vet_s[i] = i;
	}

	int vet_x[5];
	int ix = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 10; j++) {
			if (vet_r[i] == vet_s[j]) {
				vet_x[ix] = vet_r[i];
				ix++;
			}
		}
	}


	for (int i = 0; i < 5; i++) {
		printf("vet_x[%d] = %d\n", i, vet_x[i]);
	}

}
