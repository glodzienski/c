#include <stdio.h> // biblioteca para o comando printf
#include <stdlib.h> // biblioteca para o comando system
#include <locale.h> // biblioteca para acentua��o
#include <string.h>
#include <conio.h>

int calcula(int *Pn1, int *Pn2, int *Psoma);
 
int main() {
	
	setlocale(LC_ALL,"portuguese");
	int n1=0,n2=0,soma=0,res;
	
	fflush(stdin);
	printf("\nInforme o n�mero inteiro 1: ");
	scanf("%d",&n1);
	
	fflush(stdin);
	printf("\nInforme o n�mero inteiro 2: ");
	scanf("%d",&n2);
	
 	res = calcula(&n1,&n2,&soma);
 	
 	if(res == 0){
		printf("\n\nA soma do n�mero %d com o n�mero %d resulta em %d e esse resultado � PAR!!\n\n",n1,n2,soma);
	}else{
		printf("\n\nA soma do n�mero %d com o n�mero %d resulta em %d e esse resultado � IMPAR!!\n\n",n1,n2,soma);
	}
 	
	system("pause");
 	return 0;
}

int calcula(int *Pn1, int *Pn2, int *Psoma){
	int aux=0,resS=0;
	
	*Psoma = *Pn1 + *Pn2;
	
	if(*Psoma % 2 == 0){
		resS=0;
	}else{
		resS=1;
	}
	return resS;
}
