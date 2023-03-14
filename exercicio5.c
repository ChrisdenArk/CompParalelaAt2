#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void mult_matriz()
{
  int x, y, multx, multy, opcao, linha, coluna, aux;
  printf("Criação da matriz.\nInforme o número de linhas: ");
  scanf("%d.", &x);
  printf("Informe o número de colunas: ");
  scanf("%d", &y);
  printf("Matriz M[%d][%d].\n\n", x, y);
  int matriz[x][y];

  printf("Preenchimento da matriz.\n");
  for(int i = 1; i <= x; i++)
    {
      for(int j = 1; j <= y; j++)
        {
          printf("Linha %d, Coluna %d: ", i, j);
          scanf("%d", &matriz[i][j]);
        }
    }

  printf("Imprimindo matriz...\n");
  for(int i = 1; i <= x; i++)
  {
      for(int j = 1; j <= y; j++)
          printf("[%d] ", matriz[i][j]);
      printf("\n");
  }

  printf("\nDigite 1 para multiplicar a linha, 2 para multiplicar a coluna ou 3 para multiplicar ambos.\n...");scanf("%d", &opcao);
  while(opcao < 1 || opcao > 3)
  {
    printf("Opção inválida!\nInforme novamente: ");
    scanf(&opcao);
  }
  if(opcao == 1)
  {
    printf("Informe a linha da matriz: ");
    scanf("%d", &linha);
    while(linha < 1 || linha > x)
    {
      printf("Linha inválida!Informe novamente: ");
      scanf("%d", &linha);
    }
    printf("Informe o inteiro multiplicador.");
    scanf("%d", &multx);

    for(int k = 1; k <= y; k++)
    {
      aux = matriz[linha][k] * multx;
      matriz[linha][k] = aux;
    }
  }
  else if(opcao == 2)
  {
    printf("Informe a coluna da matriz: ");
    scanf("%d", &coluna);
    while(coluna < 1 || coluna > y)
    {
      printf("coluna inválida!Informe novamente: ");
      scanf("%d", &coluna);
    }
    printf("Informe o inteiro multiplicador.");
    scanf("%d", &multy);

    for(int k = 1; k <= x; k++)
    {
      aux = matriz[k][coluna] * multy;
      matriz[k][coluna] = aux;
    }
  }
  else
  {
    printf("Informe a linha da matriz: ");
    scanf("%d", &linha);
    while(linha < 1 || linha > x)
    {
      printf("Linha inválida!Informe novamente: ");
      scanf("%d", &linha);
    }
    printf("Informe o inteiro multiplicador para a linha.");
    scanf("%d", &multx);

    printf("Informe a coluna da matriz: ");
    scanf("%d", &coluna);
    while(coluna < 1 || coluna > y)
    {
      printf("coluna inválida!Informe novamente: ");
      scanf("%d", &coluna);
    }

    printf("Informe o inteiro multiplicador para a coluna.");
    scanf("%d", &multy);

    for(int k = 1; k <= y; k++)
    {
      aux = matriz[linha][k] * multx;
      matriz[linha][k] = aux;
    }

    for(int k = 1; k <= x; k++)
    {
      aux = matriz[k][coluna] * multy;
      matriz[k][coluna] = aux;
    }
  }

  printf("\n\nMatriz após a multiplicação...\n");
  for(int i = 1; i <= x; i++)
    {
      for(int k = 1; k <= y; k++)
        {
          printf("[%d] ", matriz[i][k]);
        }
      printf("\n");
    }

}

int main(){
    mult_matriz();
}
