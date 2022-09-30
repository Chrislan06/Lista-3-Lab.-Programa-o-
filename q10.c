#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3
#define MAX 11

int main(void) {
  int x, matriz[N][N], count = 0;
  srand(time(NULL));
  printf("digite um inteiro: ");
  scanf("%d", &x);
  for (int i = 0; i < N; i++) {
    for (int k = 0; k < N; k++) {
      matriz[i][k] = rand() % MAX;
    }
  }
  for (int i = 0; i < N; i++) {
    for (int k = 0; k < N; k++) {
      printf("%2d ", matriz[i][k]);
    }
    puts("");
  }
  puts("");
  for (int i = 0; i < N; i++) {
    for (int k = 0; k < N; k++) {
      if (x == matriz[i][k]) {
        count++;
      }
    }
  }
  printf("O numero %d digitado aparece %d vezes", x, count);
  return 0;
}