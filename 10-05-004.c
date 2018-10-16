#include <stdio.h> // biblioteca para o comando printf
#include <stdlib.h> // biblioteca para o comando system
#include <locale.h> // biblioteca para acentuação

int main() {
	setlocale(LC_ALL,"");
	float fpeso=0, fpesoema=0, fpesoengo=0;
	
	fflush(stdin);
	printf("\nInforme seu peso: \n\n");
	scanf("%f",&fpeso);
 	fpesoema= fpeso + fpeso * 0.15;
 	fpesoengo= fpeso - fpeso * 0.2;
 	printf("\npeso com aumento é: %.2f \n\n",fpesoengo);
 	printf("\npeso com menos é: %.2f \n\n",fpesoema);
 	
	printf("\n---------------------------\n\n");
 	system("pause");
 	return 0;
}
