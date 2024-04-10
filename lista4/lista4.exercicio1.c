#include <stdio.h>
#define TAMANHO 10

int main()
{
	int vet[TAMANHO];	
	int vet_copia[TAMANHO];

	for (int i = 0; i < TAMANHO; i++) {
		vet[i] = i;
	}

	for (int i = 0  ; i < TAMANHO; i++) {
		vet_copia[i] = vet[(TAMANHO - 1) - i];
	}

	for (int i = 0  ; i < TAMANHO; i++) {
		printf("vet_copia[%d] = %d\n", i, vet_copia[i]);
	}

	return 0;
}
