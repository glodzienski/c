#include <stdio.h> // biblioteca para o comando printf
#include <stdlib.h> // biblioteca para o comando system
#include <locale.h> // biblioteca para acentuação

int main() {
	setlocale(LC_ALL,"");
	fflush(stdin);
	
	char nome[50],nomeCopia[50];
	
	printf("\nInforme seu nome: \n\n");
 	gets(nome);
 	strcpy(nomeCopia, nome);
 	printf("\nSeu nome é: %s \n\n",nomeCopia);
 	
	printf("\n---------------------------\n");
 	system("pause");
 	return 0;
}
