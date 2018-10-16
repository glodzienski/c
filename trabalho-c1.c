#include <stdio.h> // biblioteca para o comando printf
#include <stdlib.h> // biblioteca para o comando system
#include <locale.h> // biblioteca para acentuação

int main() {
	setlocale(LC_ALL,"");
	int i;
	float a,b,c;
	
	do{
		fflush(stdin);
		printf("\nInforme um valor para I, de 1 a 3 e inteiro \n\n");
		scanf("%d",&i);	
	}while(i > 3);
	
	fflush(stdin);
	printf("\nInforme o valor A: \n\n");
	scanf("%f",&a);
	
	fflush(stdin);
	printf("\nInforme o valor B: \n\n");
	scanf("%f",&b);
	
	fflush(stdin);
	printf("\nInforme o valor C: \n\n");
	scanf("%f",&c);	
	
	if(i == 1){
		if (a <= b && b <= c){
      		printf("A ordem crescente: %.2f %.2f %.2f\n", a, b, c);
		}else if (a <= c && c <= b){
			printf("A ordem crescente: %.2f %.2f %.2f\n", a, c, b);
		}else if (b <= a && a <= c){
			printf("A ordem crescente: %.2f %.2f %.2f\n", b, a, c);
		}else if (b <= c && c <= a){
      		printf("A ordem crescente: %.2f %.2f %.2f\n", b, c, a);
    	}else if (c <= a && a <= b){
		    printf("A ordem crescente: %.2f %.2f %.2f\n", c, a, b);
		}else /* c <= b && b < a */{
      		printf("A ordem crescente: %.2f %.2f %.2f\n", c, b, a);
    	}
	}else if(i == 2){
		if (a >= b && b >= c){
      		printf("A ordem decrescente: %.2f %.2f %.2f\n", a, b, c);
		}else if (a >= c && c >= b){
			printf("A ordem decrescente: %.2f %.2f %.2f\n", a, c, b);
		}else if (b >= a && a >= c){
			printf("A ordem decrescente: %.2f %.2f %.2f\n", b, a, c);
		}else if (b >= c && c >= a){
      		printf("A ordem decrescente: %.2f %.2f %.2f\n", b, c, a);
    	}else if (c >= a && a >= b){
		    printf("A ordem decrescente: %.2f %.2f %.2f\n", c, a, b);
		}else /* c <= b && b < a */{
      		printf("A ordem decrescente: %.2f %.2f %.2f\n", c, b, a);
    	}		
	}else if(i == 3){
		if (a > b && a > c){
      		printf("A ordem ficou %.2f %.2f %.2f\n", b, a, c);
		}else if (b > c && b > c){
			printf("A ordem ficou: %.2f %.2f %.2f\n", a, b, c);
		}else if (c > a && c > b){
			printf("A ordem ficou: %.2f %.2f %.2f\n", b, c, a);
		}
	}else{
		printf("\n\n\n\n");
	}
	
	system("pause");
 	return 0;
}
