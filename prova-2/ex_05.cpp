#include <stdio.h> // biblioteca para o comando printf
#include <stdlib.h> // biblioteca para o comando system
#include <locale.h> // biblioteca para acentua��o
#include <conio.h>

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	float salario, *p_sal1, *p_sal2;
	
	fflush(stdin);
	printf("\nInforme seu sal�rio: \n\n");
	scanf("%f",&salario);
	
	p_sal1 = &salario;
	p_sal2 = p_sal1;
	*p_sal1 = 10000.00;
	
	printf("\n\nNovo sal�rio �: R$%.2f",*p_sal2);
	printf("\n\nConte�do em p_sal1: %p",p_sal1);
	printf("\n\nConte�do em p_sal2 %p\n\n",p_sal2);
	
	system("pause");
 	return 0;
}
