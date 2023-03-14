#include <stdio.h>
#include <stdlib.h>

void transpor(int matriz[5][5], int tamanho){
  
  int r = rand()%10, matrizTransposta[tamanho][tamanho];  
  
  printf("Matriz normal\n");
  
  for (int i=0; i<tamanho; i++ ){      //atribui valor
    r = rand()%10;
    for (int j=0; j<tamanho; j++ ){
      r = rand()%10;
      matriz[i][j] = r;
      printf ("%d ", matriz[i][j]);
    }
    printf("\n");
  }

	 printf("Matriz transposta\n");

	for (int i=0; i<tamanho; i++ ){      //atribui valor
    	for (int j=0; j<tamanho; j++ ){
      	matrizTransposta[i][j] = matriz[j][i];
      	printf ("%d ", matrizTransposta[i][j]);
    }
    printf("\n");
  }	

  
}

int main(){
  int tam;
  printf("Digite o tamanho da matriz: ");
  scanf("%d", &tam);
  int m[tam][tam];
  transpor(m, tam);
  return 0;
}