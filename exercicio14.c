#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void insereChar(char Str[], int posicao, char letra){
	
	int tamanho = strlen(Str);
	
	for(int i = 0; i < tamanho;i++){
		if(posicao == i){
			Str[i] = letra;
		}	
	}
	
	
	printf("\n");
	for(int i = 0; i< tamanho; i++){
		printf("%c", Str[i]);
	}
	printf("\n");
}

int main(){
	
	char Str[100], letra;
	int posicao;
	
	printf("Digite uma palavra: ");
	gets(Str);
	
	printf("Digite a letra que quer colocar: ");
	scanf("%c", &letra);
	
	printf("Digite a posicao que deseja colocar a letra: ");
	scanf("%d", &posicao);
	
	insereChar(Str,posicao,letra);
	
	return 0;
}