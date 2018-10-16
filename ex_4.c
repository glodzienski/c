#include <stdio.h> // biblioteca para o comando printf
#include <stdlib.h> // biblioteca para o comando system
#include <locale.h> // biblioteca para acentuação
 
int main() {
	setlocale(LC_ALL,"");
	int l=0,c=0,graos[4][4],total=0,c_graos=0;
	
	fflush(stdin);
	printf("\nInforme quantos grãos vão na primeira casa: \n\n");
	scanf("%d",&graos[0][0]);
	
	for(l=0;l<4;l++){
		for(c=0;c<4;c++){
			if(l==0 && c==0){
				c_graos=graos[l][c];
			}else if(c==0){
				graos[l][c]=graos[l-1][3]*2;
			}
			else{
				graos[l][c]=graos[l][c-1]*2;
				c_graos = c_graos + graos[l][c];
			}	
		}
	}
	
	for(l=0;l<4;l++){
		for(c=0;c<4;c++){
			printf("\nCASA %dx%d: %d\n",l,c,graos[l][c]);	
		}
	}
	
	printf("\nTotal de graos no tabuleiro: %d \n\n",c_graos);
 	 	
	system("pause");
 	return 0;
}
 

