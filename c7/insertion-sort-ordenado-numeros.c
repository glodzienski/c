#include <stdio.h> // biblioteca para o comando printf
#include <stdlib.h> // biblioteca para o comando system
#include <locale.h> // biblioteca para acentuação
#include <conio.h>
#include <string.h>

int main() {
	setlocale(LC_ALL,"portuguese");
	int n=0,c=0,j=0,trocaAux=0;
	
	fflush(stdin);
	printf("\nInforme quantos números tem no vetor: \n\n");
	scanf("%d",&n);
	
	int vetor[n];
 	
	
	for(c=0;c<n;c++){
		vetor[c]=0;
		fflush(stdin);
		printf("\nInforme um numero: \n\n");
		scanf("%d",&vetor[c]);
	}
	
	for(c=1;c<n;c++){
		j = c;
		while(j>0 && vetor[j-1] > trocaAux){
			trocaAux = vetor[j];
			vetor[j] = vetor[j-1];
			vetor[j-1] = trocaAux;
			j--;
		}
	}


	printf("\nVETOR \n\n");
	
    for(c=0;c<n;c++){
		printf("%d -",vetor[c]);
	}
	
	printf("\n\n");	
		
	system("pause");
 	return 0;
}
