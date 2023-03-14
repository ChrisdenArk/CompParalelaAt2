#include <stdio.h>
#include <string.h>

void mat_transposta()
{
  int x, y;
  printf("Criação da matriz...\nInforme o número de linhas da matriz: ");
  scanf("%d", &x);
  printf("Informe o número de linhas da matriz: ");
  scanf("%d", &y);
  printf("Matriz M[%d][%d].\n", x, y);
  int matriz[x][y];

  printf("Preenchendo a matriz...\n");
  for(int i = 0; i < x; i++)
    {
      for(int k = 0; k < y; k++)
        {
          printf("Linha %d, coluna %d: ", i, k);
          scanf("%d", &matriz[i][k]);
        }
    }

  printf("Imprimindo matriz...\n");
  for(int i = 0; i < x; i++)
    {
      for(int k = 0; k < y; k++)
        printf("%d ", matriz[i][k]);
      printf("\n");
    }

  int matrizT[y][x];
  printf("Transpondo a matriz...\n");
  for(int i = 0; i < x; i++)
    {
      for(int j = 0; j < y; j++)
        matrizT[j][i] = matriz[i][j];
    }

  printf("Imprimindo matriz transposta...\n");
  for(int i = 0; i < y; i++)
    {
      for(int k = 0; k < x; k++)
        printf("%d ", matrizT[i][k]);
      printf("\n");
    }

}

int main(){
    mat_transposta();
}
