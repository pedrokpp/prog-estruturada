#include <math.h>
#include <stdio.h>
#include <stdlib.h>

enum avaliacao { otimo = 1, bom, regular, ruim, pessimo };

int main(int argc, char *argv[]) {
  int n;
  printf("n de pessoas: ");
  scanf("%d", &n);

  int avaliacoes[n];
  int idades[n];

  int media_idade_ruim = 0;
  int maior_idade_pessimo = 0, maior_idade_ruim = 0, maior_idade_otimo = 0;
  int qtd_otimos = 0, qtd_bom = 0, qtd_regular = 0, qtd_ruim = 0,
      qtd_pessimo = 0;

  for (int i = 0; i < n; i++) {
    int idade, avaliacao;
    printf("idade: ");
    scanf("%d", &idade);

    printf("avaliacao (1: otimo, 2: bom, 3: regular, 4: ruim, 5: pessimo): ");
    scanf("%d", &avaliacao);

    printf("---\n");

    if (avaliacao == otimo) {
      qtd_otimos++;
      if (idade > maior_idade_otimo)
        maior_idade_otimo = idade;
    } else if (avaliacao == bom) {
      qtd_bom++;
    } else if (avaliacao == regular) {
      qtd_regular++;
    } else if (avaliacao == ruim) {
      qtd_ruim++;
      media_idade_ruim += idade;
      if (idade > maior_idade_ruim)
        maior_idade_ruim = idade;
    } else if (avaliacao == pessimo) {
      qtd_pessimo++;
      if (idade > maior_idade_pessimo)
        maior_idade_pessimo = idade;
    }
  }

  printf("a) quantidade de respostas ótimo: %d\n", qtd_otimos);
  printf("b) diferença percentual entre respostas bom e regular: %.2f%%\n",
         100.0f * fabsf(qtd_bom / (float)n - qtd_regular / (float)n));
  printf("c) média de idade das pessoas que responderam ruim: %.2f\n",
         media_idade_ruim / (float)qtd_ruim);
  printf("d) porcentagem de respostas péssimo e a maior idade que utilizou "
         "esta opção: %.2f%%, %d\n",
         100.0f * (qtd_pessimo / (float)n), maior_idade_pessimo);
  printf("e) diferença de idade entre a maior idade que respondeu ótimo e a "
         "maior idade que respondeu ruim: %d\n",
         abs(maior_idade_otimo - maior_idade_ruim));

  return EXIT_SUCCESS;
}
