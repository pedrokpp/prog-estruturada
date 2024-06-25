#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float media(char *mat, char *nome_arquivo) {
  FILE *arquivo = fopen(nome_arquivo, "r");
  if (arquivo == NULL) {
    printf("ERRO\n");
    exit(1);
  }

  char linha[100];
  char matricula[10];
  float p1, p2, p3;

  while (fgets(linha, sizeof(linha), arquivo) != NULL) {
    sscanf(linha, "%s %f %f %f", matricula, &p1, &p2, &p3);
    if (strcmp(matricula, mat) == 0) {
      fclose(arquivo);
      return (p1 + p2 + p3) / 3.0;
    }
  }

  fclose(arquivo);
  return -1.0;
}

int main() {
  char *matricula = "9010087-2";
  char *nome_arquivo = "notas.txt";
  float resultado = media(matricula, nome_arquivo);
  printf("media aluno %s eh:  %.2f\n", matricula, resultado);
  return 0;
}
