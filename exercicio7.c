#include <stdio.h>
#include <string.h>

typedef struct DadosPessoas
{
  int idade;
  float peso;
  float altura;

}pessoas;

void vet_pessoas()
{
  struct DadosPessoas pessoas;
  pessoas.idade = 10;
  printf("%d", pessoas.idade);

  char nomes[20];
  for(int i = 0; i < 3; i++)
  {
    printf("Informe os nomes...\n1° Pessoa: ");
    nomes[i] = gets(nomes);
  }

  printf("Imprimindo os nomes informados...\n\n");
  printf("%s ", nomes[1]);
}

int main(){
    vet_pessoas();
}
