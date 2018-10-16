#include <stdio.h> // biblioteca para o comando printf
#include <stdlib.h> // biblioteca para o comando system
#include <locale.h> // biblioteca para acentuação

int main() {
	setlocale(LC_ALL,"");
	char nome1[51],nome2[51];
	int id1,id2;
	
	fflush(stdin);
	printf("\nInforme seu nome: \n\n");
	gets(nome1);
	
	fflush(stdin);
	printf("\nInforme sua idade: \n\n");
	scanf("%d",&id1);
	
	fflush(stdin);
	printf("\nInforme seu nome: \n\n");
	gets(nome2);
	
	fflush(stdin);
	printf("\nInforme sua idade: \n\n");
	scanf("%d",&id2);
	
	if(id1 > id2){
		printf("\n %s é mais velho: \n\n",nome1);
	}else if (id1 == id2) {
		printf("\n Vocês tem a mesma idade");
	}else{
		printf("\n %s é mais velho: \n\n",nome2);
	}
 	 	
	printf("\n---------------------------\n\n");
 	system("pause");
 	return 0;
}
