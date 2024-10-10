#include <stdio.h>


char sexo();
float altura();
float pesoideal(char genero, float altura);
void resultado(float resposta);

int main(void) {
  
  float alturaPessoa = altura();
  char genero = sexo();
  
  float resposta = pesoideal(genero, alturaPessoa);
  resultado(resposta);
}



char sexo() {
  char genero;
  
  scanf(" %c", &genero);
  while (genero != 'H' && genero != 'M') {
    printf("Genero invalido, digite novamente: ");
    scanf(" %c", &genero);
  }
  return genero;
}

float altura() {
  float altura;
  scanf("%f", &altura);
  return altura;
}

float pesoideal(char genero, float altura) {
  float pesoideal;
  if (genero == 'H') {
    pesoideal = (72.7 * altura) - 58;
  } else if (genero == 'M') {
    pesoideal = (62.1 * altura) - 44.7;
  }
  return pesoideal;
}

void resultado(float resposta) {
  printf("%.2f\n", resposta);
}
