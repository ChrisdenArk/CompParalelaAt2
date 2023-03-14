#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void achar_menor(int x)
{
  int matriz[x][x];
  int linhamenorelem, menorelem;
  printf("Preencha a matriz\n");
  for(int i = 0; i < x; i++)
  {
    printf("linha %d. ", i);
    for(int k = 0; k < x; k++)
      {
        printf("coluna %d.\n", k);
        scanf("%d", &matriz[i][k]);
        if(i == 0 && k == 0){
          menorelem = matriz[i][k];
          linhamenorelem = i;}
        else
        {
          if(matriz[i][k] < menorelem)
          {
            menorelem = matriz[i][k];
            linhamenorelem = i;
          }
        }
      }
  }

  printf("Imprimir matriz...\n\n");
  for(int i = 0; i < x; i++)
    {
      for(int k = 0; k < x; k++)
        {
          printf("[%d] ", matriz[i][k]);
        }
      printf("\n");
    }
  printf("\nMenor elemento está presente na linha: %d.\n", linhamenorelem+1);
}

void achar_menor2()
{
  int x;
  printf("Informe o número de linhas/colunas da matriz quadrada: ");
  scanf("%d\N", &x);
  achar_menor(x);
}

int main(){
    achar_menor2();
}
