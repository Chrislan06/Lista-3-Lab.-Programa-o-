#include <stdio.h>
#include <string.h>
#define TAM 50

int main(void){
char string[TAM], copia[TAM];
int controle;
  puts("digite uma palavra");
  fgets(string,TAM,stdin);
  strcpy(copia,string);
  controle=strlen(string);
  controle--;
  for(int i=0; string[i] !='\n';i++){
    copia[controle-1] = string[i];
    controle--;
    }
  puts(copia);
  return 0;
}