#include <stdio.h> // biblioteca para o comando printf
#include <stdlib.h> // biblioteca para o comando system
#include <locale.h> // biblioteca para acentuação
#include <conio.h>
#include <string.h>

int main() {
	setlocale(LC_ALL,"portuguese");
	int n,c,trocou,trocaAux;
	
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

	trocou=1;
	while(trocou==1){
		trocou=0;
		for(c=0;c<n;c++){
			if(vetor[c]>vetor[c+1]){
				trocaAux=vetor[c];
				vetor[c]=vetor[c+1];
				vetor[c+1]=trocaAux;
				trocou=1;
			}
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
