#include <stdio.h> // biblioteca para o comando printf
#include <stdlib.h> // biblioteca para o comando system
#include <locale.h> // biblioteca para acentuação
#include <string.h>
#include <conio.h>

void mostra(int n);
 
int main() {
	
	setlocale(LC_ALL,"portuguese");
	int numero;
	
	fflush(stdin);
	printf("\nInforme um número menor ou igual a 100: ");
	scanf("%d",&numero);
 	
 	mostra(numero);
 	
	system("pause");
 	return 0;
}

void mostra(int n){
	if(n<=100){
		printf("%d \n",n);
		mostra(n+1);
	}
}
