#include <stdio.h> // biblioteca para o comando printf
#include <stdlib.h> // biblioteca para o comando system
#include <locale.h> // biblioteca para acentuação
 
int main() {
	setlocale(LC_ALL,"");
	int num=0,idade=0,c=0,c1=0,c_e=0,c_a=0;
	float nota=0, nota_t=0, media=0;
	char con;
	
	for(c=0;c<25;c++){
		fflush(stdin);
		printf("\nInforme seu código: \n\n");
		scanf("%d",&num);
		
		fflush(stdin);
		printf("\nInforme sua idade: \n\n");
		scanf("%d",&idade);
	
		nota_t = 0;
		
		for(c1=0;c1<12;c1++){
			nota=0;
			fflush(stdin);
			printf("\nInforme a nota %d: \n\n",c1 + 1);
			scanf("%f",&nota);
			nota_t = nota_t + nota;
		}
		media = nota_t / 12;
		if(media>=90){
			con = 'A';
			c_a = c_a + 1;
		}else if(media>=75 && media<90){
			con = 'B';
		}else if(media>=60 && media<75){
			con = 'C';
		}else if(media>=40 && media<60){
			con = 'D';
		}else{
			con = 'E';
			c_e = c_e + 1;
		}
		
		printf("\nAluno %d, têm média: %.2f, então conceito %c: \n\n",num,media,con);
	}
	
	printf("\nAlunos com conceito A: %d \n\n",c_a);
	printf("\nAlunos com conceito E: %d \n\n",c_e);
 	 	
	system("pause");
 	return 0;
} 

