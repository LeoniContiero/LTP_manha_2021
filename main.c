// programa: conversor de polegadas para milimetros

#include <stdio.h>
#include <math.h>
#include <float.h>
#define cte_polTomm 25.4

int main(void) {
  //definição de variaveis:
  float entr_pol, saida_mm;
 
  // 1. inserir o valor em polegadas: entr_pol
  printf ("insira o valor em polegadas: \n");
  scanf("%f", &entr_pol);
  // 2. Calcular saida: saida_mm = cte_polTomm * entr_pol
  saida_mm = cte_polTomm * entr_pol;
  // 3. mostrar saida_mm
  printf("Resultado: %.2f mm\n",saida_mm);
  
  
  return 0;
}