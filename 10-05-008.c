#include <stdio.h> // biblioteca para o comando printf
#include <stdlib.h> // biblioteca para o comando system
#include <locale.h> // biblioteca para acentua��o

int main() {
	setlocale(LC_ALL,"");
	int num;
	
	fflush(stdin);
	printf("\nInforme um n�mero inteiro\n\n");
	scanf("%d",&num);
	
	if(num % 2 == 0){
		printf("\n %d � par\n\n",num);
	}else{
		printf("\n %d � �par\n\n",num);
	}
 	 	
	printf("\n---------------------------\n\n");
 	system("pause");
 	return 0;
}
