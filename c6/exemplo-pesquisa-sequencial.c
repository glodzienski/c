#include <stdio.h> // biblioteca para o comando printf
#include <stdlib.h> // biblioteca para o comando system
#include <locale.h> // biblioteca para acentuação
#include <conio.h>
#include <string.h>

int main() {
	setlocale(LC_ALL,"portuguese");	
	int c=0,val=0;
	float vetor[10],search=0.0;
 	
 	printf("\nInforme 10 números ordenados e diferentes de 0: \n\n");
 	
	for(c=0;c<10;c++){
		vetor[c]=0;
		fflush(stdin);
		printf("\n\nInforme um numero: \n\n");
		scanf("%f",&vetor[c]);
	}
	search = 1;
	while(search != 0){
		search = 0;
		printf("\nAgora informe um número para pesquisar: \n\n");
		scanf("%f",&search);
		
		for(c=0;c<10;c++){
			if(vetor[c]==search){
				printf("\nNúmero %.2f encontrado na posição %d do vetor\n\n",vetor[c],c);
				val=0;
				break;
			}else if(vetor[c]>search){
				val=1;
				break;
			}else{
				val=1;
			}
		}
		
		if(val==1){
			printf("\nNúmero não encontrado!! Informe outro ou 0 para sair do programa.\n\n");
		}
		
	}
	
	
	
	

	system("pause");
 	return 0;
}
