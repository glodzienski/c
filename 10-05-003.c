#include <stdio.h> // biblioteca para o comando printf
#include <stdlib.h> // biblioteca para o comando system
#include <locale.h> // biblioteca para acentuação

int main() {
	setlocale(LC_ALL,"");
	float fhoras=0,fvhora=0,sal=0;
	
	fflush(stdin);
	printf("\nInforme horas trabalhadas: \n\n");
	scanf("%f",&fhoras);
 	
	fflush(stdin);
	printf("\nInforme valor da hora: \n\n");
	scanf("%f",&fvhora);
 	sal = fvhora* fhoras;
 	printf("\nSeu salário é: %.2f \n\n",sal);
 	
	printf("\n---------------------------\n");
 	system("pause");
 	return 0;
}
