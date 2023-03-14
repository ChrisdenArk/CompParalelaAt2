#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void med_aprov()
{
  float n1, n2, n3, ME, MA;
  char conceito;
  printf("Informe as notas.\n");
  printf("Nota 1: ");
  scanf("%f.\n", &n1);

  printf("Nota 2: ");
  scanf("%f.\n", &n2);

  printf("Nota 3: ");
  scanf("%f.\n", &n3);

  printf("Média das notas dos exercícios realizados: ");
  scanf("%f.\n\n", &ME);

  printf("Notas informadas: N1: %.2f. N2: %.2f. N3: %.2f. ME: %.2f.\n", n1, n2, n3, ME);

  MA = ((n1 + (n2*2) + (n3*3) + ME) / 7);
  printf("Média de aproveitamento: %.2f.\n", MA);

  if(MA >= 9)
    conceito = 'A';
  else if(MA >= 7.5 && MA < 9)
    conceito = 'B';
  else if(MA >= 6 && MA < 7.5)
    conceito = 'C';
  else if(MA >= 4 && MA < 6)
    conceito = 'D';
  else
    conceito = 'E';
  printf("Atribuição da média a partir do conceito.\nMédia: %c.\n", conceito);
}

int main(){
    med_aprov();
}
