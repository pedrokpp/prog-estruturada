#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct funcionario {
  char nome[81];
  float valor_hora;
  int horas_mes;
};

typedef struct funcionario Funcionario;

void carrega(int n, Funcionario **vet, char *arquivo) {
  FILE *fp = fopen(arquivo, "r");
  if (fp == NULL) {
    printf("ERRO\n");
    exit(1);
  }

  for (int i = 0; i < n; i++) {
    vet[i] = (Funcionario *)malloc(sizeof(Funcionario));
    if (vet[i] == NULL) {
      printf("ERRO\n");
      fclose(fp);
      exit(1);
    }

    fgets(vet[i]->nome, 81, fp);
    vet[i]->nome[strcspn(vet[i]->nome, "\n")] = '\0';
    fscanf(fp, "%f %d\n", &vet[i]->valor_hora, &vet[i]->horas_mes);
  }

  fclose(fp);
}

int main() {
  int n = 3;
  Funcionario *vet[n];

  for (int i = 0; i < n; i++) {
    vet[i] = NULL;
  }

  carrega(n, vet, "funcionarios.txt");

  for (int i = 0; i < n; i++) {
    printf("Nome: %s\n", vet[i]->nome);
    printf("Valor Hora: %.2f\n", vet[i]->valor_hora);
    printf("Horas/Mês: %d\n", vet[i]->horas_mes);
    free(vet[i]);
  }

  return 0;
}
