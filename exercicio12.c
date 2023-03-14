#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int encontraChar(char palavra[], char letra){
	
	
	for(int i = 0; i < strlen(palavra);i++){
		if(letra == palavra[i])
			return i;
	}
}
	
int main(){
	
	char palavra[40];
	char letra;
	
	printf("Digite uma palavra: ");
	gets(palavra);
	
	printf("Digite a letra que quer buscar na palavra: %s: ", palavra);
	scanf("%c", &letra);
	
	printf("Posicao da letra %c: %d",letra,encontraChar(palavra,letra));
	
	return 0;
}
