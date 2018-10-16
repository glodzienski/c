#include <stdio.h> // biblioteca para o comando printf
#include <stdlib.h> // biblioteca para o comando system
#include <locale.h> // biblioteca para acentuação
#include <conio.h>

void mostra(char nome[71],int mat, float med);
int Calculo(float n1,float n2,float n3,float n4);

int main() {
	setlocale(LC_ALL,"portuguese");
	int mat=0;
	float media=0.0,n1=0.0,n2=0.0,n3=0.0,n4=0.0;
	char nome[71];
	
	do{
		fflush(stdin);
		printf("\nInforme seu nome: \n\n");
		gets(nome);
		
		fflush(stdin);
		printf("\nInforme sua matrícula: \n\n");
		scanf("%d",&mat);
		
		fflush(stdin);
		printf("\nInforme sua primeira nota: \n\n");
		scanf("%f",&n1);
		
		fflush(stdin);
		printf("\nInforme sua segunda nota: \n\n");
		scanf("%f",&n2);
		
		fflush(stdin);
		printf("\nInforme sua terceira nota: \n\n");
		scanf("%f",&n3);
		
		fflush(stdin);
		printf("\nInforme sua quarta nota: \n\n");
		scanf("%f",&n4);
		
		media = Calculo(n1,n2,n3,n4);
		mostra(nome,mat,media);
	}while(mat!=0);
 	 	
	system("pause");
 	return 0;
}

void mostra(char nome[71],int mat, float media){
	printf("O aluno %s com matrícula %d tem media de %.2f\n\n",nome,mat,media);
}
int Calculo(float n1,float n2,float n3,float n4){
	float media=(n1+n2+n3+n4)/4;
	return media;
}
