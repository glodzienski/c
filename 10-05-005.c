#include <stdio.h> // biblioteca para o comando printf
#include <stdlib.h> // biblioteca para o comando system
#include <locale.h> // biblioteca para acentuação

int main() {
	setlocale(LC_ALL,"");
	float fmed=0, fhoras=0;
	
	fflush(stdin);
	printf("\nInforme as horas de escravidão: \n\n");
	scanf("%f",&fhoras);
 	fmed = fhoras / 5;
 	printf("\nMédia de horas é: %.2f \n\n",fmed);
 	
	printf("\n---------------------------\n\n");
 	system("pause");
 	return 0;
}
