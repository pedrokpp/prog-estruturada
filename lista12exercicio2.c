#include <stdio.h>

int somaVet(int vetor[], int tamanho) {
  if (tamanho == 0) {
    return 0;
  } else {
    int soma = somaVet(vetor, tamanho - 1);
    if (vetor[tamanho - 1] % 2 != 0) {
      soma += vetor[tamanho - 1];
    }
    return soma;
  }
}

int main() {
  int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int tamanho = sizeof(vetor) / sizeof(vetor[0]);
  int soma = somaVet(vetor, tamanho);
  printf("A soma dos números ímpares do vetor é: %d\n", soma);
  return 0;
}
