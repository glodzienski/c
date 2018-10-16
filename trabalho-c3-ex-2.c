#include <stdio.h> // biblioteca para o comando printf
#include <stdlib.h> // biblioteca para o comando system
#include <locale.h> // biblioteca para acentuação

int main() {
	setlocale(LC_ALL,"");
	int mat1[5][5],mat2[5][5],diap=0,mats[5][5],l=0,c=0,cont=0;
	
	for(cont=0;cont<2;cont++){
		printf("\n---------------------- \n\n");
		printf("\nInforme os valores da Matriz %d\n",cont + 1);
		printf("\n\n---------------------- \n\n");
		for(l=0;l<5;l++){
			for(c=0;c<5;c++){
				fflush(stdin);
				printf("\nInforme o valor da posição %d X %d:  \n",l,c);
				if(cont==0){
					scanf("%d",&mat1[l][c]);
				}else{
					scanf("%d",&mat2[l][c]);
				}				
			}
		}
	}
	printf("\n\nSOMA DAS MATRIZES\n\n");
	for(l=0;l<5;l++){
		printf("- linha %d -",l);
		for(c=0;c<5;c++){
			mats[l][c] = mat1[l][c] + mat2[l][c];
			printf("- %d -",mats[l][c]);
			if(l==c){
				diap = diap + mats[l][c];
			}
		}
		printf("\n\n");
	}
	printf("\n\nDIAGONAL PRINCIPAL: %d",diap);
	printf("\n\n");
	
	system("pause");
 	return 0;
}

