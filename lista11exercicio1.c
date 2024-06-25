#include <stdio.h>
#include <stdlib.h>

struct elemento {
  float info;
  struct elemento *prox;
};
typedef struct elemento Elemento;

Elemento *filtra(Elemento *lst, float min, float max) {
  Elemento *atual = lst;
  Elemento *anterior = NULL;

  while (atual != NULL) {
    if (atual->info < min || atual->info > max) {
      Elemento *temp = atual;
      atual = atual->prox;
      free(temp);
      if (anterior == NULL) {
        lst = atual;
      } else {
        anterior->prox = atual;
      }
    } else {
      anterior = atual;
      atual = atual->prox;
    }
  }

  return lst;
}

Elemento *novoElemento(float info) {
  Elemento *novo = (Elemento *)malloc(sizeof(Elemento));
  novo->info = info;
  novo->prox = NULL;
  return novo;
}

void imprimeLista(Elemento *lst) {
  Elemento *atual = lst;
  while (atual != NULL) {
    printf("%.2f ", atual->info);
    atual = atual->prox;
  }
  printf("\n");
}

int main() {
  Elemento *lst = novoElemento(1.5);
  lst->prox = novoElemento(2.5);
  lst->prox->prox = novoElemento(3.5);
  lst->prox->prox->prox = novoElemento(4.5);
  lst->prox->prox->prox->prox = novoElemento(5.5);

  printf("Lista original: ");
  imprimeLista(lst);

  float min = 2.0;
  float max = 5.0;

  lst = filtra(lst, min, max);

  printf("Lista filtrada: ");
  imprimeLista(lst);

  return 0;
}
