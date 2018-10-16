#include <stdio.h> // biblioteca para o comando printf
#include <stdlib.h> // biblioteca para o comando system
#include <locale.h> // biblioteca para acentuação
#include <conio.h>

 
struct exemplo {
	int codigo;
	char nome [50];
	long int telefone;
	char mail [50];
};

struct funcionario {
 int cod;
 char nome[30];
 float salario;
};

void teste(int t,int *te);//void nao tem retorno
 
int main() {
	
	struct exemplo Se;
 
	setlocale(LC_ALL,"portuguese");
	int idade=0;
	char palavra[51];
	
	fflush(stdin);
	printf("\nInforme sua idade: \n\n");
	scanf("%d",&idade);
	
	fflush(stdin);
	printf("\nInforme uma palavra: \n\n");
	gets(palavra);//strcpy(palavra, "tutorialspoint");
 	
 	*pe=10;
 	
	teste(1,*pe)	
	system("pause");
 	return 0;
}
 
void teste(int t,int *te){
	t = 10;
	te = &t;
	int *i,*cal;
	struct funcionario *p;
	
	i = (int *)malloc(10*sizeof(int));//aloca mémoria
	p = (struct funcionario *)malloc(10*sizeof(struct funcionario));//alocando memória
	cal = (int *)calloc(10,sizeof(int));//alocando memória
	p = (int *)realloc(p, 20 * sizeof(int));
	free(p);//liberar espaço alocado		
}
