#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ler_nome()
{
  char namea[20];
  char nameb[20];
  int result = 0;
  //int lena = sizeof(namea)/sizeof(namea[0]);
  printf("Informe o primeiro nome: ");
  //scanf("%s.\n", namea);
  gets(namea);
  printf("Informe o segundo nome: ");
  //scanf("%s.\n", nameb);
  gets(nameb);
  printf("Leitura dos nomes.\nPrimeiro nome: %s.\nSegundo nome: %s.\n\n", namea, nameb);

  printf("Ordem alfabética.\n");
  result = strcmp(namea, nameb);

  if(result <= -1)
    printf("%s é menor que %s.\n", namea, nameb);
  else if(result >= 1)
    printf("%s é menor que %s.\n", nameb, namea);
  else if(result == 0)
    printf("%s e %s são idênticas.\n", namea, nameb);
}

int main(){
    ler_nome();
}
