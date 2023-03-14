#include <stdio.h>
#include <stdlib.h>

void verificaNegativo(int matriz[5][5], int tamanho){
  
  int r = rand()%10 ;  
  
  for (int i=0; i<tamanho; i++ ){     
    r = rand()%10 + 1;
    for (int j=0; j<tamanho; j++ ){
      r = rand()%10 - 2;
      matriz[i][j] = r;
    }
  }
  
  for (int i=0; i<tamanho; i++ ){    
    for (int j=0; j<tamanho; j++ ){
     printf ("%2d ", matriz[ i ][ j ]);
    }
    printf("\n");
  }
  
  printf("\n");
  for (int i=0; i<tamanho; i++ ){    
    for (int j=0; j<tamanho; j++ ){
     if(matriz[i][j] < 0)
     	matriz[i][j] = matriz[i][j] * -1;
    printf ("%2d ", matriz[ i ][ j ]);
    }
    printf("\n");
  }
  
}

int main(){
  int tam;
  printf("Digite o tamanho da matriz: ");
  scanf("%d", &tam);
  int m[tam][tam];
  verificaNegativo(m, tam);
  return 0;
}