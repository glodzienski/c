#include <stdio.h> // biblioteca para o comando printf
#include <stdlib.h> // biblioteca para o comando system
#include <locale.h> // biblioteca para acentuação
#include <conio.h>

main (void) {
 int *p,i,n; // contadora
 
 fflush(stdin);
	printf("\nInforme quantas idades quer informar: \n\n");
	scanf("%d",&n);

 printf("Informe a idade dos %d jogadores ?",n);
 p = (int *)malloc(10 * sizeof(int)); // Aloca 10 números inteiros p pode agora ser
 // tratado como um vetor com a posições
 for (i=0; i < n ; i++) { /* p pode ser tratado como um vetor com a posições */
 printf("Informe a idade: ");
 scanf("%d", &p[i]);
 }

 printf("\n***********************************************\n");
 for (i=0; i < n ; i++) { /* p pode ser tratado como um vetor com a posicoes */
 printf("Idade lida: %d \n", p[i]);
 }
 getche();
 return 0;
} 
