#include <stdio.h>
#include <stdlib.h>

void SomaLinhas(int matriz[5][5], int tamanho, int l1, int l2, int flag){
  
  int r = rand()%10;  
  
  for (int i=0; i<tamanho; i++ ){     
    r = rand()%10;
    for (int j=0; j<tamanho; j++ ){
      r = rand()%10;
      matriz[i][j] = r;
      printf ("%d ", matriz[i][j]);
    }
    printf("\n");
  }

	
	printf("\n");
   for (int i=0; i<tamanho; i++ ){     
    for (int j=0; j<tamanho; j++ ){
       if(i == l1 && flag == 0)
	   		matriz[l2][j] = matriz[l1][j] + matriz[l2][j]; 
	   if(i == l1 && flag == 1)
	   		matriz[l2][j] = matriz[l1][j] * matriz[l2][j]; 	
       printf ("%d ", matriz[i][j]);
    }
    printf("\n");
    }
    
  }
  


int main(){
  int tam, l1, l2, flag;
  printf("Digite o tamanho da matriz: ");
  scanf("%d", &tam);
  
  printf("Digite a primeira linha para a operacao ");
  scanf("%d", &l1);
  
  printf("Digite a segunda linha para a operacao: ");
  scanf("%d", &l2);

  printf("Digite 0 para soma e 1 para multiplicacao: ");
  scanf("%d", &flag);
  
  int m[tam][tam];
  
  SomaLinhas(m, tam,l1,l2, flag);
  return 0;
}