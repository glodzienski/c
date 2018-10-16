#include <stdio.h> // biblioteca para o comando printf
#include <stdlib.h> // biblioteca para o comando system
#include <locale.h> // biblioteca para acentuação
#include <conio.h>

main (void) {
 int *p;
 int i; // contadora
 printf("Informe a idade dos 10 jogadores ?");
 p = (int *)malloc(10 * sizeof(int)); // Aloca 10 números inteiros p pode agora ser
 // tratado como um vetor com a posições
 for (i=0; i < 10 ; i++) { /* p pode ser tratado como um vetor com a posições */
 printf("Informe a idade: ");
 scanf("%d", &p[i]);
 }

 printf("\n***********************************************\n");
 for (i=0; i < 10 ; i++) { /* p pode ser tratado como um vetor com a posicoes */
 printf("Idade lida: %d \n", p[i]);
 }
 getche();
 return 0;
} 
