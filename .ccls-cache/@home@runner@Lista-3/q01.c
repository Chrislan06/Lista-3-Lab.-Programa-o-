#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 15
#define MX 10
int main(void) {
  // pesquisar como resolver o problema do scanf
  float v[TAM], maior, menor;
  srand(time(NULL));
  puts("elementos do Vetor:");
  for (int i = 0; i < TAM; i++) {
    v[i] = rand() / (float)RAND_MAX *(MX-1);
    printf("%.2f\n", v[i]);
  }
  maior = v[0];
  menor = v[0];
  for (int k = 1; k < 15; k++) {
    menor = (menor > v[k]) ? v[k] : menor;
    maior = (maior < v[k]) ? v[k] : maior;
  }
  printf("\nMaior: %.2f e Menor: %.2f e a soma dos dois: %.2f", maior, menor,
         maior + menor);
  return 0;
}