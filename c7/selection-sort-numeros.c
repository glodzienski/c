#include <stdio.h> // biblioteca para o comando printf
#include <stdlib.h> // biblioteca para o comando system
#include <locale.h> // biblioteca para acentuação
#include <conio.h>
#include <string.h>

int main() {
	setlocale(LC_ALL,"portuguese");
	int n,c,j,minimo,trocaAux;
	
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

	for(c=0;c<n;c++){
		minimo=c;
		for(j=c+1;j<n;j++){
			if(vetor[j]<vetor[minimo]){
				minimo=j;
			}
		}
		trocaAux=vetor[c];
		vetor[c]=vetor[minimo];
		vetor[minimo]=trocaAux;
	}

	printf("\nVETOR \n\n");
	
    for(c=0;c<n;c++){
		printf("%d -",vetor[c]);
	}
	
	printf("\n\n");
		
	system("pause");
 	return 0;
}
