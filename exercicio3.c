#include <stdio.h>
#include <string.h>

void num_max()
{
  int x, contr, contl;
  printf("Informe o n�mero m�ximo: ");
  scanf("%d.", &x);
  while(x % 2 == 0)
    {
      printf("N�mero par inv�lido! Informe um n�mero �mpar: ");
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
