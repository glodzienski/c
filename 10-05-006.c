#include <stdio.h> // biblioteca para o comando printf
#include <stdlib.h> // biblioteca para o comando system
#include <locale.h> // biblioteca para acentuação

int main() {
	setlocale(LC_ALL,"");
	int idade=0;
	
	fflush(stdin);
	printf("\nInforme sua idade: \n\n");
	scanf("%d",&idade);
 	if (idade > 55)printf("\nMaior que 55 anos \n\n");
 	
	printf("\n---------------------------\n\n");
 	system("pause");
 	return 0;
}
