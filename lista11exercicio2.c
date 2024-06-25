#include <stdio.h>
#include <stdlib.h>

struct elemento {
  int info;
  struct elemento *prox;
};
typedef struct elemento Elemento;

Elemento *copia(Elemento *lst) {
  Elemento *nova_lista = NULL;
  Elemento *ultimo = NULL;

  while (lst != NULL) {
    Elemento *novo_elemento = (Elemento *)malloc(sizeof(Elemento));
    novo_elemento->info = lst->info;
    novo_elemento->prox = NULL;

    if (nova_lista == NULL) {
      nova_lista = novo_elemento;
      ultimo = novo_elemento;
    } else {
      ultimo->prox = novo_elemento;
      ultimo = novo_elemento;
    }

    lst = lst->prox;
  }

  return nova_lista;
}

void imprime_lista(Elemento *lst) {
  while (lst != NULL) {
    printf("%d ", lst->info);
    lst = lst->prox;
  }
  printf("\n");
}

int main() {
  Elemento *lista_original = (Elemento *)malloc(sizeof(Elemento));
  lista_original->info = 1;
  lista_original->prox = (Elemento *)malloc(sizeof(Elemento));
  lista_original->prox->info = 2;
  lista_original->prox->prox = (Elemento *)malloc(sizeof(Elemento));
  lista_original->prox->prox->info = 3;
  lista_original->prox->prox->prox = NULL;

  printf("Lista original: ");
  imprime_lista(lista_original);

  Elemento *nova_lista = copia(lista_original);

  printf("Nova lista: ");
  imprime_lista(nova_lista);

  return 0;
}
