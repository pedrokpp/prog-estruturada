#include <stdio.h>
#include <string.h>

float busca(char *arquivo, char *matricula) {
  FILE *file = fopen(arquivo, "r");
  if (file == NULL) {
    printf("ERRO\n");
    return -1.0;
  }

  char linha[100];
  while (fgets(linha, sizeof(linha), file) != NULL) {
    char mat[20];
    float cr;

    if (sscanf(linha, "%s %f", mat, &cr) == 2) {
      if (strcmp(mat, matricula) == 0) {
        fclose(file);
        return cr;
      }
    }
  }

  fclose(file);
  return -1.0;
}

int main() {
  char *nomeArquivo = "alunos.txt";
  char *matricula = "9010087-2";
  float cr = busca(nomeArquivo, matricula);
  if (cr != -1.0) {
    printf("CR %s eh %.2f\n", matricula, cr);
  } else {
    printf("matricula %s não encontrada\n", matricula);
  }
  return 0;
}
