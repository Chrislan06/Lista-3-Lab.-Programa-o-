#include <stdio.h>
#include <string.h>
#define TAM 25
int main(void) {
  char s1[TAM], s2[TAM];
  int diferente = 0;
  puts("Digite uma palavra");
  fgets(s1, TAM, stdin);
  puts("Digite outra palavra");
  fgets(s2, TAM, stdin);
  if (strcmp(s1, s2) == 0) {
    printf("as string são iguais(feito usando strcmp)");
  } else {
    printf("as string são diferentes(feito usando strcmp)");
  }
  for (int i = 0; s1[i] !='\n' && s2[i] !='\n'; i++) {
    if (s1[i] != s2[i]) {
      diferente = 1;
      break;
    }
  }
  if (!diferente) {
    printf("\nas string são iguais(feito sem usar strcmp)");
  } else {
    printf("\nas string são diferentes(feito sem usar strcmp)");
  }
  return 0;
}
