#include <stdio.h>
#define TAM 20

int main(void){
  char palavra[TAM];
  char c;
  puts("Digite uma palavra");
  fgets(palavra,TAM,stdin);
  printf("digite um caractere: ");
  c = getchar();
  if(palavra[0] == c){
    printf("a primeira letra(%c) é igual ao caractere digitado(%c)",palavra[0],c);
  }else{
    printf("a primeira letra(%c) é diferente do caractere digitado(%c)",palavra[0],c);
  }
  return 0;
}