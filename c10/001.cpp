#include <stdio.h> // biblioteca para o comando printf
#include <stdlib.h> // biblioteca para o comando system
#include <locale.h> // biblioteca para acentua��o
#include <conio.h>

main (void) {
 int *p;
 int i; // contadora
 printf("Informe a idade dos 10 jogadores ?");
 p = (int *)malloc(10 * sizeof(int)); // Aloca 10 n�meros inteiros p pode agora ser
 // tratado como um vetor com a posi��es
 for (i=0; i < 10 ; i++) { /* p pode ser tratado como um vetor com a posi��es */
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
