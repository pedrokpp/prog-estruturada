#include <stdio.h>
#include <string.h>

void remove_comments(char *input_file, char *output_file) {
  FILE *input = fopen(input_file, "r");
  if (input == NULL) {
    printf("ERRO: não foi possível abrir o arquivo %s\n", input_file);
    return;
  }

  FILE *output = fopen(output_file, "w");
  if (output == NULL) {
    printf("ERRO: não foi possível criar o arquivo %s\n", output_file);
    fclose(input);
    return;
  }

  char line[1024];
  while (fgets(line, sizeof(line), input) != NULL) {
    char *comment_pos = strstr(line, "//");
    if (comment_pos != NULL) {
      *comment_pos = '\0';
    }
    size_t len = strlen(line);
    while (len > 0 && (line[len - 1] == ' ' || line[len - 1] == '\t' ||
                       line[len - 1] == '\n')) {
      line[--len] = '\0';
    }
    fputs(line, output);
    fputc('\n', output);
  }

  fclose(input);
  fclose(output);
}

int main() {
  char input_file[100];
  char output_file[100];

  printf("arquivo input: ");
  scanf("%99s", input_file);

  printf("arquivo output: ");
  scanf("%99s", output_file);

  remove_comments(input_file, output_file);

  printf("arquivo %s gerado\n", output_file);
  return 0;
}
