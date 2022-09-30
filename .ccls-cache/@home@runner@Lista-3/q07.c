#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

#define TAM 3
#define MAX 20

int main (void){
int v[TAM];
float me=0,mg=1;
  srand(time(NULL));
  for(int i=0; i<TAM;i++){
  v[i]= rand()% MAX;
  me+=v[i];
  mg*=v[i];
  }
  me /=(float)TAM;
  mg=pow(mg,(float)1/3);
  puts("Números gerados");
for(int i=0; i<TAM;i++){
  printf("%d ",v[i]);
  }
  puts("");
  printf("Média Aritmética: %.2f\nMédia Geometrica: %.2f",me,mg);
  return 0;
}