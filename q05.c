#include <stdio.h>
#include <string.h>
#define TAM 100

int main(void) {
  char s1[TAM], s2[TAM],AUX;
  char copia1[TAM], copia2[TAM],copia[TAM];
  int j=0;
  puts("Digite a primeira String");
  scanf("%s",s1);
  strcpy(copia1,s1);
  printf("Digite a segunda String\n");
  scanf("%s",s2);
  strcpy(copia2,s2);
  strcat(s1,s2);
  puts("String concantenadas com (strcat)");
  puts(s1);
  for(int i=0; copia1[i] !='\0';i++){
    copia[j] = copia1[i];
    j++;
  }
  for(int i=0; copia2[i] !='\0';i++){
    copia[j]=copia2[i];
    j++;
  }
  copia[j]='\0';
  
  puts("String concantenadas sem (strcat)");
  puts(copia);
  
  return 0;
}