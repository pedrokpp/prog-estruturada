#include <stdio.h>

int conversao_binaria(int n, int *vetor_binario, int tamanho,
                      int tamanho_fixo) {
  vetor_binario[tamanho] = (n % 2);
  n /= 2;
  if (tamanho > 0) {
    tamanho--;
    return conversao_binaria(n, vetor_binario, tamanho, tamanho_fixo);
  }
  if (tamanho == 0) {
    int indice, binario;
    binario = 0;
    for (indice = 0; indice < tamanho_fixo; indice++) {
      if (indice == 0) {
        if (vetor_binario[indice] == 0) {
          binario = 0;
        } else {
          binario = 1;
        }
      } else {
        if (vetor_binario[indice] == 0) {
          binario *= 10;
        } else {
          binario = (binario * 10) + 1;
        }
      }
    }
    return binario;
  }
}

int main(void) {
  int n;
  printf("Insira um valor inteiro decimal para ser convertido em binario: ");
  scanf("%d", &n);
  int indice, tamanho, tamanho_fixo, numero_binario;

  tamanho = 0;
  for (indice = n; indice > 0;) {
    indice /= 2;
    tamanho++;
  }
  tamanho_fixo = tamanho;
  int vetor_binario[tamanho];
  tamanho -= 1;
  numero_binario = conversao_binaria(n, vetor_binario, tamanho, tamanho_fixo);
  printf("\nO numero digitado em binario e': %d", numero_binario);
  getchar();
  return 0;
}
