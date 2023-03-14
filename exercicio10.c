#include <stdio.h>
#include <stdlib.h>

void multLC(int matriz[5][5], int tamanho, int linha, int coluna, int valor){
  
  int r = rand()%10;  
  
  printf("Matriz original\n");
  
  for (int i=0; i<tamanho; i++ ){      
    r = rand()%10;
    for (int j=0; j<tamanho; j++ ){
      r = rand()%10;
      matriz[i][j] = r;
      printf ("%d ", matriz[ i ][ j ]);
    }
    printf("\n");
	}

	printf("Nova matriz\n");
	
	for (int i=0; i<tamanho; i++ ){      
	    for (int j=0; j<tamanho; j++ ){
	      if(i == linha)
	      	matriz[i][j] = matriz[i][j] * valor;
		  
	      if(j == coluna)
	      	matriz[i][j] = matriz[i][j] * valor;
	    	printf ("%d ", matriz[ i ][ j ]);
	    }
	    printf("\n");
	}


}

int main(){
  int tam, linha, coluna, valor;
  
  printf("Digite o tamanho da matriz: ");
  scanf("%d", &tam);
  printf("Digite a linha da matriz para ser multiplicada: ");
  scanf("%d", &linha);
  printf("Digite a coluna da matriz para ser multiplicada: ");
  scanf("%d", &coluna);
  printf("Digite o valor para multiplicar: ");
  scanf("%d",&valor);
  
  int m[tam][tam];
  multLC(m, tam, linha, coluna, valor);
  return 0;
}