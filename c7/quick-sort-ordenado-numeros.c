#include <stdio.h> // biblioteca para o comando printf
#include <stdlib.h> // biblioteca para o comando system
#include <locale.h> // biblioteca para acentuação
#include <conio.h>
#include <string.h>

void Quick(int vetor[10], int inicio, int fim);
int main(){
	setlocale(LC_ALL,"portuguese");
	
	int i=0,n=0;
	
	fflush(stdin);
	printf("\nInforme quantos números tem no vetor: \n\n");
	scanf("%d",&n);
	
	int vetor[n];
	
	
	for(i=0;i<n;i++){
		vetor[i]=0;
		fflush(stdin);
		printf("\nInforme um numero: \n\n");
		scanf("%d",&vetor[i]);
	}
   
	printf("\n\nVetor desordenado: ");
	for(i = 0; i < n; i++){
		printf("%d ", vetor[i]);
	}
	printf("\n\n");
	  
	Quick(vetor,0,n-1);
	
	printf("\n\nVetor ordenado: ");
	for(i = 0; i < n; i++){
		printf("%d ", vetor[i]);
	}
	printf("\n\n");
}

void Quick(int vetor[], int inicio, int fim){
   
   int pivo, aux, i, j, meio;
   
   i = inicio;
   j = fim;
   
   meio = (int) ((i + j) / 2);
   pivo = vetor[meio];
   
   do{
      while (vetor[i] < pivo) i = i + 1;
      while (vetor[j] > pivo) j = j - 1;
      
      if(i <= j){
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
         i = i + 1;
         j = j - 1;
      }
   }while(j > i);
   
   if(inicio < j) Quick(vetor, inicio, j);
   if(i < fim) Quick(vetor, i, fim);   

}
