#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main(void) {
  srand(time(NULL));
  int v[TAM], intervalo = 0, copia[TAM], aux;
  puts("Digite o tamanho do intervalo a ser calculado");
  scanf("%d", &intervalo);
  for (int i = 0; i < TAM; i++) {
    v[i] = rand() % intervalo + 1;
    copia[i] = v[i];
  }
  puts("Valores gerados sem ordenação");
  for (int i = 0; i < TAM; i++) {
    printf("%d ", v[i]);
  }
  // ordenação por seleção
  for (int i = 0; i < TAM - 1; i++) {
    for (int k = i + 1; k < TAM; k++) {
      if (v[i] > v[k]) {
        aux = v[i];
        v[i] = v[k];
        v[k] = aux;
      }
    }
  }
  puts("");
  puts("valores ordenados(por seleção)");
  for (int i = 0; i < TAM; i++) {
    printf("%d ", v[i]);
  }
  puts("");
  // ordenação por bubbleshort
  for (int k = TAM-1; k > 0; k--) {
    for (int i = 0; i < k; i++) {
      if (copia[i] > copia[i + 1]) {
        aux = copia[i];
        copia[i] = copia[i + 1];
        copia[i+1] = aux;
      }
    }
  }
  puts("valores ordanos(por bubbleshort)");
  for (int i = 0; i < TAM; i++) {
    printf("%d ", copia[i]);
  }
  return 0;
}