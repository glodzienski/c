#include <stdio.h> // biblioteca para o comando printf
#include <stdlib.h> // biblioteca para o comando system
#include <locale.h> // biblioteca para acentuação

int main() {
	setlocale(LC_ALL,"");
	int l1=0,l2=0,l3=0,l4=0,l5=0,l6=0,jog[20],c,jogg,ver;
	
	for(c=0;c<20;c++){
		jog[c] = 0;
		jogg = c + 1;
		do{
			fflush(stdin);
			printf("\n\nInforme o lado da jogada %d:\n\n",jogg);
			scanf("%d",&jog[c]);
			if(jog[c]>=1 && jog[c]<=6){
				ver = 1;
				switch (jog[c]){
					case 1: 
					l1 = l1 + 1;
					break;
					case 2: 
					l2 = l2 + 1;
					break;
					case 3: 
					l3 = l3 + 1;
					break;
					case 4: 
					l4 = l4 + 1;
					break;
					case 5: 
					l5 = l5 + 1;
					break;
					case 6: 
					l6 = l6 + 1;
					break;
					default:
					printf("Erro no programa, valor do lado não está entre 1 e 6");
					system("pause");				
				}
			}else{
				ver = 0;
			}
		}while(ver==0);
	}
	
	printf("\n---------------------- \n\n");
	printf("\nRelatório de jogadas do dado:\n");
	printf("\nLado 1: %d\n",l1);
	printf("\nLado 2: %d\n",l2);
	printf("\nLado 3: %d\n",l3);
	printf("\nLado 4: %d\n",l4);
	printf("\nLado 5: %d\n",l5);
	printf("\nLado 6: %d\n",l6);
	printf("\n\n---------------------- \n\n");
 	 	
	system("pause");
 	return 0;
}


