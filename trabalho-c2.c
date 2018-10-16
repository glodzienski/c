#include <stdio.h> // biblioteca para o comando printf
#include <stdlib.h> // biblioteca para o comando system
#include <locale.h> // biblioteca para acentuação

int main() {
	setlocale(LC_ALL,"");
	int op, cod,dep,c;
	float sal_b=0.0,sal_l=0.0,sal_d=0.0,inss_ano=0.0,inss=0.0,ir_ano=0.0,ir=0.0;
	char inssC[5],irC[6];
	
	do{
		fflush(stdin);
		printf("\n-------MENU----------- \n\n");
		printf("Escolha uma opção: \n\n");
		printf("1 - Informar novo código \n\n");
		printf("0 - Sair do programa \n\n");
		printf("---------------------- \n\n");
		scanf("%d",&op);
		
		if(op == 1){
			do{
				fflush(stdin);
				printf("\n Informe um código válido de funcionário:\n\n");
				scanf("%d",&cod);
			}while(cod <= 0);	
					
			do{
				fflush(stdin);
				printf("\n Informe um número de dependentes válido:\n\n");
				scanf("%d",&dep);
			}while(dep < 0);
						
			//for que pede todos os salários do ano
			for(c=1;c<=12;c++){
								
				do{
					fflush(stdin);
					printf("\n Informe um salário bruto válido do mês %d:\n\n",c);
					scanf("%f",&sal_b);
				}while(sal_b <=0);
				
				//calculo INSS
				if(sal_b<=1399.12){
					inss = sal_b * 0.08;
					strcpy(inssC,"8%");
				}else if(sal_b>1399.12 && sal_b<=2331.88){
					inss = sal_b * 0.09;
					strcpy(inssC,"9%");
				}else if(sal_b>2331.88 && sal_b<4663.75){
					inss = sal_b * 0.11;
					strcpy(inssC,"11%");
				}else{
					inss = 513.01;
					strcpy(inssC,"Teto");
				}
				
				//desconto INSS
				sal_l = sal_b - inss;
				
				//desconto dos dependentes
				sal_d = sal_l - 189.59 * dep;
				
				//calculo imposto de renda				
				if(sal_d<=1903.98){
					ir = 0;
					strcpy(irC,"0%");
				}else if(sal_d>1903.98 && sal_d<=2826.65){
					ir = sal_d* 0.075 - 142.8;
					strcpy(irC,"7,5%");
				}else if(sal_d>2826.65 && sal_d<=3751.05){
					ir = sal_d * 0.15 - 354.8;
					strcpy(irC,"15%");
				}else if(sal_d>3751.05 && sal_d<=4664.68){
					ir = sal_d * 0.225 - 636.13;
					strcpy(irC,"22,5%");
				}else{
					ir = sal_l * 0.275 - 869.36;
					strcpy(irC,"27,5%");
				}
				
				//desconto IR
				sal_l= sal_l - ir;
				
				printf("\n---------------------- \n");
				printf("\nOLERITE --- MÊS %d \n\nCódigo funcionário: %d\nSalário bruto: %.2f\nINSS: %s -- INSS deduzido: %.2f\nIR: %s -- IR calculado: %.2f\nSalário liquido: %.2f",c,cod,sal_b,inssC,inss,irC,ir,sal_l);
				printf("\n\n---------------------- \n\n");
				ir_ano = ir_ano + ir;
				inss_ano = inss_ano + inss;
			}
			printf("\n---------------------- \n");
			printf("\nINFOS FINAL DE ANO\n\nCódigo funcionário: %d\nINSS deduzido tota: %.2f\nIR total: %.2f\n",cod,inss_ano,ir_ano);
			printf("\n\n---------------------- \n\n");
		}else if(op == 0){
			printf("\n Obrigado, volte sempre! \n\n");
		}else{
			printf("\n Opção incorreta \n\n");
			op = 1;
		}
	} while (op!=0);
	
	system("pause");
 	return 0;
}


