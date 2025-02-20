#include <stdio.h>

int main(void) {
  
//as váriaveis estão bem claras e o número 1 representa a primeira carta e o 2 a segunda carta.
  
  char estado1[1], estado2[1];
  char codigo1[3],codigo2[3];
  char cidade1[20],cidade2[20];
  int populacao1,populacao2;
  float area1,area2;
  float PIB1,PIB2;
  int Pturisticos1,Pturisticos2;
  
//Registro dos dados da primeira carta.
  
  printf("Digite a letra do primeiro estado (utilizando apenas uma letra e que seja entre A e H): \n");
  scanf(" %s",estado1);
  printf("Digite o código do primeiro estado (utilizando a letra e usando um número entre 01 até 04): \n");
  scanf(" %s",codigo1);
  printf("Digite a cidade do primeiro estado: \n");
  scanf(" %s",cidade1);
  printf("Digite a população do primeiro estado: \n");
  scanf(" %d",&populacao1);
  printf("Digite a área do primeiro estado: \n");
  scanf(" %f",&area1);
  printf("Digite o PIB do primeiro estado: \n");
  scanf(" %f",&PIB1);
  printf("Digite a população turística do primeiro estado: \n");
  scanf(" %d",&Pturisticos1);
  printf("\n\n\n");
  
//Registro dos dados da segunda carta.

  printf("Digite a letra do segundo estado (utilizando apenas uma letra e que seja entre A e H): \n");
  scanf(" %s",estado2);
  printf("Digite o código do segundo estado (utilizando a letra e usando um número entre 01 até 04): \n");
  scanf(" %s",codigo2);
  printf("Digite a cidade do segundo estado: \n");
  scanf(" %s",cidade2);
  printf("Digite a população do segundo estado: \n");
  scanf(" %d",&populacao2);
  printf("Digite a área do segundo estado: \n");
  scanf(" %f",&area2);
  printf("Digite o PIB do segundo estado: \n");
  scanf(" %f",&PIB2);
  printf("Digite a população turística do segundo estado: \n");
  scanf(" %d",&Pturisticos2);
  printf("\n\n\n");
  
//Mostrar a primeira carta e seus dados.
  
  printf("Carta 1:\n");
  printf("Estado: %s\n",estado1);
  printf("Código: %s\n",codigo1);
  printf("Cidade: %s\n",cidade1);
  printf("População: %d\n",populacao1);
  printf("Área: %.2f\n km²",area1);
  printf("PIB: %.2f\n",PIB1);
  printf("População turística: %d\n",Pturisticos1);
  printf("\n\n\n");

//Mostrar a segunda carta e seus dados.
  
  printf("Carta 2:\n");
  printf("Estado: %s\n",estado2);
  printf("Código: %s\n",codigo2);
  printf("Cidade: %s\n",cidade2);
  printf("População: %d\n",populacao2);
  printf("Área: %.2f\n km²",area2);
  printf("PIB: %.2f\n",PIB2);
  printf("População turística: %d\n",Pturisticos2);
  printf("\n\n\n");
  
  return 0;
}
