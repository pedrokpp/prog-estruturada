#include <stdio.h>
#include <stdlib.h>

enum sexos { mulher = 0, homem = 1, outro = 2 };

float variancia(int n, float *alturas) {
  float media = 0.0f;
  for (int i = 0; i < n; i++) {
    media += alturas[i];
  }
  media /= n;

  float variancia = 0.0f;
  for (int i = 0; i < n; i++) {
    float dif = alturas[i] - media;
    variancia += dif * dif;
  }
  return variancia / n;
}

int main(int argc, char *argv[]) {
  int n;
  printf("n: ");
  scanf("%d", &n);

  int m = 0, h = 0;

  float *alturas = malloc(n * sizeof(float));

  for (int i = 0; i < n; i++) {
    int idade, sexo;
    float altura;

    printf("idade: ");
    scanf("%d", &idade);

    printf("sexo (0: mulher, 1: homem, 2: outro): ");
    scanf("%d", &sexo);

    printf("altura: ");
    scanf("%f", &altura);

    if (sexo == mulher && idade > 20 && idade < 35)
      m++;

    if (sexo == homem && altura > 1.8)
      h++;

    alturas[i] = altura;
  }

  printf("mulheres com idade entre 20 e 35 anos: %d\n", m);
  printf("homens com altura maior que 1.8m: %d\n", h);
  printf("variancia das alturas: %.2f\n", variancia(n, alturas));

  return EXIT_SUCCESS;
}
