#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

//  Fun��o que retorna 1 em caso de Pilha Cheia e 0 em caso de inclus�o Ok                  
int inclui(int *p_ultimo, int p_Pilha[10], int p_valor);  // p_ultimo - par�metro que define a posi��o do �ltima elemento da Pilha (primeira vaga)
                                                         //            esse valor � passado por refer�ncia pois o mesmo � alterado com a inclu�o de um elemento            

                                                         // p_Pilha   - Pilha na qual o conte�do (p_valor) ser� inclu�do
                                                         //            esse valor � passado por refer�ncia pois o mesmo � alterado              

                                                         // p_valor  - valor a ser inserido na Pilha 


// Fun��o que mostra os elementos da Pilha 
void mostra(int p_ultimo, int p_Pilha[10]);              // p_ultimo - par�metro que define a �ltima posi��o elemento da Pilha (primeira vaga)


//  Fun��o que retorna o Primeiro elemento da Pilha, caso exista OU - caso a lista esteja VAZIA                  
int exclui(int *p_ultimo, int p_Pilha[10]);              // p_ultimo - par�metro que define a �ltima posi��o elemento da Pilha (primeira vaga)
                                                        //            esse valor � passado por refer�ncia pois o mesmo � alterado com a retirada do elemento               

                                                        // p_Pilha   - Pilha na qual o conte�do (p_valor) ser� inclu�do



int main() {
   setlocale(LC_ALL,"portuguese");

   int Pilha[10];
   int op;        // Op��o do par�metro
   int valor;     // Valor a ser inclu�do / retirado da Pilha. Se valor = -1, significa Pilha vazia   
   int ultimo;   // Vari�vel que define a �ltima posi��o da Pilha (primeira vaga)   
   int res;      // Recebe o retorno do resultado das fun��es inclui
                 // fun��o inclui 1 - Pilha Cheia    0 - Inclus�o OK
  
  
   printf("----------------------------------\n");
   printf("1 - Incluir\n");
   printf("2 - Retirar\n");   
   printf("3 - Listar \n");      
   printf("4 - Sair \n");         
   printf("----------------------------------\n");   
   
   printf("\n\nInforme uma op��o para Pilha: \n\n");
   scanf("%d", &op);
   
   ultimo = 0;   // Pilha VAZIA   
   
   while (op != 4) {
         
      switch (op) {
      
         case 1:  // Inclui
  
            printf("\n\nInforme o valor a ser incluido na Pilha: \n\n");
            scanf("%d", &valor);
            
            res = inclui(&ultimo, Pilha, valor);
            
            if (res == 1) {  // Se retornar 1, Pilha Cheia
               printf("\n\nPilha CHEIA\n\n");
            }
            else { 
               printf("\n\nValor %d incluido na Pilha \n\n", valor);
            }
            break;
         
         case 2: // Exclui
            valor = exclui(&ultimo, Pilha);
            if (valor == -1){                // Se retornar -1, Pilha Vazia
               printf("\n\nPilha Vazia\n\n");
            }
            else{
               printf ("\n\nElemento retirado da Pilha foi o %d\n\n", valor);
            }                          
            break;

         case 3:  // Mostra
            mostra(ultimo, Pilha);
            break;

         default:
            printf("\n\nINVALIDO \n\n");

     }

      printf("\n\n----------------------------------\n");
      printf("1 - Incluir\n");
      printf("2 - Retirar\n");   
      printf("3 - Listar \n");      
      printf("4 - Sair \n");         
      printf("----------------------------------\n");   
   
      printf("\n\nInforme uma op��o para Pilha: \n\n");
      scanf("%d", &op);

         
   }
   
   system("pause");
   
   return 0;
}

int inclui(int *p_ultimo, int p_Pilha[10], int p_valor){   
	
	if(*p_ultimo==10){
		return 1;
	}else{
		p_Pilha[*p_ultimo] = p_valor;
		*p_ultimo = *p_ultimo + 1;
		
	    printf("\n\n Inclui o numero %d na Pilha \n\n", p_valor);
	    return 0 ;	
	}
}


void mostra(int p_ultimo, int p_Pilha[10]){
	int c;
	
	printf("\n\n Conte�do da Pilha\n\n");
	
	for(c=0;c<p_ultimo;c++){
		printf("%d - ",p_Pilha[c]);
	}

} 


int exclui(int *p_ultimo, int p_Pilha[10]){   
   	int c,exc;
	if(*p_ultimo==0){
		return -1;
	}else{
		exc = p_Pilha[*p_ultimo-1];
		p_Pilha[*p_ultimo]=0;
		*p_ultimo = *p_ultimo -1;
		return exc;
	}

}
   
