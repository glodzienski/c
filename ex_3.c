#include <stdio.h> // biblioteca para o comando printf
#include <stdlib.h> // biblioteca para o comando system
#include <locale.h> // biblioteca para acentuação

struct estagiarios_infos {
 int cod;
 char nome[61];
 char nasc[10];
 float sal[12],salA;
};

int main() {
	setlocale(LC_ALL,"");
	
	int c1=0,c2=0;
	
	struct estagiarios_infos e[60];
	
	for(c1=0;c1<60;c1++){
		fflush(stdin);
		printf("\nInforme um código: \n\n");
		scanf("%d",&e[c1].cod);
		
		fflush(stdin);
		printf("\nInforme o nome do estagiário: \n\n");
		gets(e[c1].nome);
		
		fflush(stdin);
		printf("\nInforme seu ano de nascimento(DD-MM-AAAA): \n\n");
		gets(e[c1].nasc);
		
		e[c1].salA=0;				
		for(c2=0;c2<12;c2++){
			fflush(stdin);
			printf("\nInforme o salário do Mês %d: \n\n",c2+1);
			scanf("%f",&e[c1].sal[c2]);
			e[c1].salA = e[c1].salA + e[c1].sal[c2];	
		}
	}
	
	for(c1=0;c1<60;c1++){
		printf("\n----------------------\n");
		printf("\nCódigo %d: \n\n",e[c1].cod);
		printf("\nNome %s: \n\n",e[c1].nome);
		printf("\nAno de Nascimento %s: \n\n",e[c1].nasc);
		printf("\nSalários");
		for(c2=0;c2<12;c2++){
			printf("\nMês %d: %.2f \n",c2 + 1,e[c1].sal[c2]);
		}
		printf("\nSalário anual %.2f: \n\n",e[c1].salA);
	}
 	 	
	system("pause");
 	return 0;
}
 

