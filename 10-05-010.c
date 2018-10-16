#include <stdio.h> // biblioteca para o comando printf
#include <stdlib.h> // biblioteca para o comando system
#include <locale.h> // biblioteca para acentuação

int main() {
	setlocale(LC_ALL,"");
	int idade;
	
	fflush(stdin);
	printf("\nInforme sua idade\n\n");
	scanf("%d",&idade);
	
	if(idade>=18 && idade <=65){
		printf("\nSua idade está entre 18 e 65 anos");
	}else{
		printf("\nSua idade não está entre 18 e 65 anos");
	}
	printf("\n---------------------------\n\n");
 	system("pause");
 	return 0;
}
