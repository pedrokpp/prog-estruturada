#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _ALUNO {
  char nome[81];
  float nota1, nota2;
  struct _ALUNO *prox;
} ALUNO;

ALUNO *cria_aluno(char nome[], float nota1, float nota2) {
  ALUNO *novo_aluno = (ALUNO *)malloc(sizeof(ALUNO));
  if (novo_aluno == NULL) {
    printf("ERRO: alocar memória.\n");
    exit(1);
  }
  strcpy(novo_aluno->nome, nome);
  novo_aluno->nota1 = nota1;
  novo_aluno->nota2 = nota2;
  novo_aluno->prox = NULL;
  return novo_aluno;
}

void incluir_aluno(ALUNO **lista, ALUNO *aluno) {
  if (*lista == NULL) {
    *lista = aluno;
  } else {
    ALUNO *atual = *lista;
    while (atual->prox != NULL) {
      atual = atual->prox;
    }
    atual->prox = aluno;
  }
}

void imprimir_alunos(ALUNO *lista) {
  ALUNO *atual = lista;
  while (atual != NULL) {
    printf("Nome: %s\n", atual->nome);
    printf("Nota 1: %.2f\n", atual->nota1);
    printf("Nota 2: %.2f\n\n", atual->nota2);
    atual = atual->prox;
  }
}

void excluir_aluno(ALUNO **lista, char nome[]) {
  ALUNO *anterior = NULL;
  ALUNO *atual = *lista;

  while (atual != NULL && strcmp(atual->nome, nome) != 0) {
    anterior = atual;
    atual = atual->prox;
  }

  if (atual != NULL) {
    if (anterior == NULL) {
      *lista = atual->prox;
    } else {
      anterior->prox = atual->prox;
    }
    free(atual);
  }
}

ALUNO *buscar_aluno(ALUNO *lista, char nome[]) {
  ALUNO *atual = lista;
  while (atual != NULL && strcmp(atual->nome, nome) != 0) {
    atual = atual->prox;
  }
  return atual;
}

void liberar_lista(ALUNO *lista) {
  ALUNO *atual = lista;
  while (atual != NULL) {
    ALUNO *proximo = atual->prox;
    free(atual);
    atual = proximo;
  }
}

int main() {
  ALUNO *lista = NULL;
  FILE *arquivo = fopen("alunos2.txt", "r");
  if (arquivo == NULL) {
    printf("ERRO: abrir o arquivo.\n");
    return 1;
  }

  char nome[81];
  float nota1, nota2;
  while (fscanf(arquivo, "%s %f %f\n", nome, &nota1, &nota2) == 3) {
    ALUNO *aluno = cria_aluno(nome, nota1, nota2);
    incluir_aluno(&lista, aluno);
  }

  fclose(arquivo);

  imprimir_alunos(lista);

  char nome_busca[81];
  printf("Digite o nome do aluno a ser buscado: ");
  scanf("%s", nome_busca);
  ALUNO *aluno_busca = buscar_aluno(lista, nome_busca);
  if (aluno_busca != NULL) {
    printf("Aluno encontrado:\n");
    printf("Nome: %s\n", aluno_busca->nome);
    printf("Nota 1: %.2f\n", aluno_busca->nota1);
    printf("Nota 2: %.2f\n", aluno_busca->nota2);
  } else {
    printf("Aluno não encontrado.\n");
  }

  liberar_lista(lista);

  return 0;
}
