#include <stdio.h> // biblioteca para o comando printf
#include <stdlib.h> // biblioteca para o comando system
#include <locale.h> // biblioteca para acentua��o

int main() {
	setlocale(LC_ALL,"");
	int t;
	float tot, valor;
	
	fflush(stdin);
	printf("\nInforme quanto tempo � cliente da loja\n\n");
	scanf("%d",&t);
	
	fflush(stdin);
	printf("\nInforme o valor da compra\n\n");
	scanf("%f",&valor);
	
	if(t > 5 && valor > 1000){
		tot = valor * 0.1;
		printf("Voc� ganhou 10%% de desconto: %.2f",tot);
	}else if(t > 5 && valor > 5000){
		tot = valor * 0.2;
		printf("Voc� ganhou 20%% de desconto: %.2f",tot);
	}else{
		printf("Voc� n�o ganhou desconto");
	}
 	 	
	printf("\n---------------------------\n\n");
 	system("pause");
 	return 0;
}
