#include <stdio.h>
#include <string.h>

void num_max()
{
  int x, contr, contl;
  printf("Informe o número máximo: ");
  scanf("%d.", &x);
  while(x % 2 == 0)
    {
      printf("Número par inválido! Informe um número ímpar: ");
      scanf("%d", &x);
    }
  contr = x;
  contl = 1;
  int loop = 1;

  while(loop = 1)
    {
      for(int i = contl; i <= contr; i++)
      {
          printf("%d ", i);
      }
      contr--;
      contl++;
      if(contl == contr)
      {
        printf("\n%d ", contl);
        break;
      }
      printf("\n");
    }
}

int main(){
  num_max();
}
