#include <stdio.h>
#include <stdlib.h>
#define N 3
int main (void){
int matriz[N][N];
int armazenar;
for(int i=0;i<N;i++){
  for(int k=0;k<N;k++){
    printf("Matriz[%d][%d] = ",i,k);
    scanf("%d",&armazenar);
    matriz[i][k]= armazenar;
  }
}
  printf("elementos da diagonal principal: ");
  for(int i=0;i<N;i++){
   printf("%d ",matriz[i][i]);
  }
  return 0;
}