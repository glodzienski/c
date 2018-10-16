#include <stdio.h> // biblioteca para o comando printf
#include <stdlib.h> // biblioteca para o comando system
#include <locale.h> // biblioteca para acentuação
 
int main() {
	setlocale(LC_ALL,"");
	int idade=0;
	char nome[61];
	
	do{
		fflush(stdin);
		printf("\nInforme seu nome: \n\n");
		gets(nome);
		
		fflush(stdin);
		printf("\nInforme sua idade: \n\n");
		scanf("%d",&idade);	
		
		switch(idade){
			case 4:
				printf("\nO(a) %s com %d anos se enquadra na categoria Infantil\n\n",nome,idade);
				break;
			case 5:
				printf("\nO(a) %s com %d anos se enquadra na categoria Infantil\n\n",nome,idade);
				break;
			case 6:
				printf("\nO(a) %s com %d anos se enquadra na categoria Junior\n\n",nome,idade);
				break;
			case 7:
				printf("\nO(a) %s com %d anos se enquadra na categoria Junior\n\n",nome,idade);
				break;
			case 8:
				printf("\nO(a) %s com %d anos se enquadra na categoria Junior\n\n",nome,idade);
				break;
			case 9:
				printf("\nO(a) %s com %d anos se enquadra na categoria Infanto-Juvenil\n\n",nome,idade);
				break;
			case 10:
				printf("\nO(a) %s com %d anos se enquadra na categoria Infanto-Juvenil\n\n",nome,idade);
				break;
			case 11:
				printf("\nO(a) %s com %d anos se enquadra na categoria Juvenil\n\n",nome,idade);
				break;
			case 12:
				printf("\nO(a) %s com %d anos se enquadra na categoria Juvenil\n\n",nome,idade);
				break;
			case 13:
				printf("\nO(a) %s com %d anos se enquadra na categoria Juvenil\n\n",nome,idade);
				break;
			default:
				printf("\nO(a) %s com %d anos não se enquadra em nenhuma categoria.\n\n",nome,idade);
				break;
		}
	}while(idade>0);
	
 	 	
	system("pause");
 	return 0;
}
