#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ALUNOS 100

typedef struct _ALUNO {
  char nome[81];
  float nota1, nota2;
} ALUNO;

void mostrar_alunos(FILE *arquivo) {
  ALUNO aluno;
  fseek(arquivo, 0, SEEK_SET);

  printf("\nmedia maior que 6.0:\n");
  while (fread(&aluno, sizeof(ALUNO), 1, arquivo) == 1) {
    float media = (aluno.nota1 + aluno.nota2) / 2.0;
    if (media > 6.0) {
      printf("nome: %s\nnota 1: %.2f\nnota 2: %.2f\nmédia: %.2f\n\n",
             aluno.nome, aluno.nota1, aluno.nota2, media);
    }
  }
}

void incluir_aluno(FILE *arquivo) {
  ALUNO aluno;
  fseek(arquivo, 0, SEEK_END);

  printf("Digite o nome do aluno: ");
  scanf("%s", aluno.nome);
  printf("Digite a nota 1: ");
  scanf("%f", &aluno.nota1);
  printf("Digite a nota 2: ");
  scanf("%f", &aluno.nota2);

  fwrite(&aluno, sizeof(ALUNO), 1, arquivo);
}

void alterar_aluno(FILE *arquivo) {
  char nome[81];
  ALUNO aluno;
  int encontrado = 0;

  printf("nome do aluno a ser alterado: ");
  scanf("%s", nome);

  fseek(arquivo, 0, SEEK_SET);
  while (fread(&aluno, sizeof(ALUNO), 1, arquivo) == 1) {
    if (strcmp(aluno.nome, nome) == 0) {
      encontrado = 1;
      printf("nova nota 1: ");
      scanf("%f", &aluno.nota1);
      printf("nova nota 2: ");
      scanf("%f", &aluno.nota2);

      fseek(arquivo, -sizeof(ALUNO), SEEK_CUR);
      fwrite(&aluno, sizeof(ALUNO), 1, arquivo);
      break;
    }
  }

  if (!encontrado) {
    printf("aluno não encontrado.\n");
  }
}

void excluir_aluno(FILE *arquivo) {
  char nome[81];
  ALUNO aluno;
  FILE *temp = fopen("temp.dat", "w+b");

  printf("Digite o nome do aluno a ser excluído: ");
  scanf("%s", nome);

  fseek(arquivo, 0, SEEK_SET);
  while (fread(&aluno, sizeof(ALUNO), 1, arquivo) == 1) {
    if (strcmp(aluno.nome, nome) != 0) {
      fwrite(&aluno, sizeof(ALUNO), 1, temp);
    }
  }

  fclose(arquivo);
  fclose(temp);
  remove("alunos.dat");
  rename("temp.dat", "alunos.dat");
  arquivo = fopen("alunos.dat", "r+b");
}

int main() {
  FILE *arquivo = fopen("alunos.dat", "a+b");
  if (arquivo == NULL) {
    printf("ERRO: abrir o arquivo.\n");
    return 1;
  }

  int opcao;
  do {
    printf("\nMenu:\n");
    printf("1. Mostrar alunos com média maior que 6.0\n");
    printf("2. Incluir aluno\n");
    printf("3. Alterar aluno\n");
    printf("4. Excluir aluno\n");
    printf("5. Sair\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
      mostrar_alunos(arquivo);
      break;
    case 2:
      incluir_aluno(arquivo);
      break;
    case 3:
      alterar_aluno(arquivo);
      break;
    case 4:
      excluir_aluno(arquivo);
      break;
    case 5:
      printf("Saindo...\n");
      break;
    default:
      printf("Opção inválida.\n");
      break;
    }
  } while (opcao != 5);

  fclose(arquivo);
  return 0;
}
