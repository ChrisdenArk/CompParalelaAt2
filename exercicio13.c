#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void removeChar(char Str[], int posicao){
	
	int tamanho = strlen(Str);
	
	for(int i = 0; i < tamanho;i++){
		if(posicao == i){
			for(int j = i; j <tamanho; j++){
				Str[j] = Str[j+1];
			}
			tamanho--;
		}
	}
	
	printf("\n");
	for(int i = 0; i< tamanho; i++){
		printf("%c", Str[i]);
	}
	printf("\n");
}

int main(){
	
	char Str[100];
	int posicao;
	
	printf("Digite uma palavra: ");
	gets(Str);
	
	printf("Digite a posicao da letra que quer remover na palavra %s: ", Str);
	scanf("%d", &posicao);
	
	removeChar(Str,posicao);
	
	return 0;
}