#include <stdio.h> // biblioteca para o comando printf
#include <stdlib.h> // biblioteca para o comando system
#include <locale.h> // biblioteca para acentuação

struct vars_S{
	int num,meses;
	float iptu,iptuf;
}; 

void main() {
	setlocale(LC_ALL,"");
	
	struct vars_S s[50];
	
	int c;
	
	for(c=0;c<50;c++){
		fflush(stdin);
		printf("\n\nInforme número de cadastro:\n\n");
		scanf("%d",&s[c].num);
		
		fflush(stdin);
		printf("\n\nInforme valor do IPTU:\n\n");
		scanf("%f",&s[c].iptu);
		
		fflush(stdin);
		printf("\n\nInforme número de meses em atraso:\n\n");
		scanf("%d",&s[c].meses);
		
		s[c].iptuf = s[c].iptu + s[c].meses * 50.00;
		printf("\n\n %d  --- VALOR TOTAL DO IPTU: %.2f\n\n",s[c].num,s[c].iptuf);
	}
	
	system("pause");
 	return 0;
}

