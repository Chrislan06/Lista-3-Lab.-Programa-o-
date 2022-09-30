#include <stdio.h>
#define MAX 100
int main (void){
char palavra[MAX];
char control;
int count=0;
puts("digite uma palavra (até 99 letras)");
  fgets(palavra,MAX,stdin);
  for(int i = 0;control != '\n';i++){
    control = palavra[i];
    count++;
  }
  printf("a string tem %d caracteres (%d com o caracter nulo)",count-1,count);
  return 0;
}