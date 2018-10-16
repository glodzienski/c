#include <stdio.h> // biblioteca para o comando printf
#include <stdlib.h> // biblioteca para o comando system
#include <locale.h> // biblioteca para acentuação
#include <conio.h>

float Sal_Bruto(float PFHorasT,float PFHorasE);

float Sal_Liquido(float PSalBru);

void Mostra(int Pcod, int PhorasN, int PhorasE, float PsalB, float PsalL);

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	int cod=0, horasN=0, horasE=0, c;
 	float salB=0.0,salL=0.0;
	for(c=0;c<10;c++){
		fflush(stdin);
		printf("\nInforme seu código: \n\n");
		scanf("%d",&cod);
		
		fflush(stdin);
		printf("\nInforme horas normais trabalhadas: \n\n");
		scanf("%d",&horasN);
		
		fflush(stdin);
		printf("\nInforme horas extras trabalhadas: \n\n");
		scanf("%d",&horasE);
		
		salB = Sal_Bruto(horasN,horasE);
		
		salL = Sal_Liquido(salB);
		
		Mostra(cod,horasN,horasE,salB,salL);	
	}
	
	system("pause");
 	return 0;
}

float Sal_Bruto(float PFHorasT,float PFHorasE){
	float sal_bruto=0.0;
	
	sal_bruto = (PFHorasT*12.00)+(PFHorasE*15.50);
	return sal_bruto;
}

float Sal_Liquido(float PSalBru){
	float sal_liq=0.0;
	
	sal_liq = PSalBru - (PSalBru * 0.1);
	return sal_liq;
}

void Mostra(int Pcod, int PhorasN, int PhorasE, float PsalB, float PsalL){
	printf("\n\nO funcionário %d trabalhou %d horas normais e %d horas extras.",Pcod,PhorasN,PhorasE);
	printf("\n\nIrá receber R$%.2f de salário bruto e R$%.2f de salário liquido.\n\n",PsalB,PsalL);
}
