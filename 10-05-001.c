#include <stdio.h> // biblioteca para o comando printf
#include <stdlib.h> // biblioteca para o comando system
#include <locale.h> // biblioteca para acentuação

int main() {
	setlocale(LC_ALL,"");
	fflush(stdin);
	
	char nome[50], email[50];
	
	printf("\nInforme seu nome: \n\n");
 	gets(nome);
 	printf("\nInforme seu email: \n\n");
 	gets(email);
 	printf("\nO cliente %s possui o e-mail %s \n\n",nome,email);
 	
	printf("\n---------------------------\n");
 	system("pause");
 	return 0;
}
