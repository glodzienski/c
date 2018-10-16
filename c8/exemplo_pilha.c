#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

//  Função que retorna 1 em caso de Pilha Cheia e 0 em caso de inclusão Ok                  
int inclui(int *p_ultimo, int p_Pilha[10], int p_valor);  // p_ultimo - parâmetro que define a posição do última elemento da Pilha (primeira vaga)
                                                         //            esse valor é passado por referência pois o mesmo é alterado com a incluão de um elemento            

                                                         // p_Pilha   - Pilha na qual o conteúdo (p_valor) será incluído
                                                         //            esse valor é passado por referência pois o mesmo é alterado              

                                                         // p_valor  - valor a ser inserido na Pilha 


// Função que mostra os elementos da Pilha 
void mostra(int p_ultimo, int p_Pilha[10]);              // p_ultimo - parâmetro que define a última posição elemento da Pilha (primeira vaga)


//  Função que retorna o Primeiro elemento da Pilha, caso exista OU - caso a lista esteja VAZIA                  
int exclui(int *p_ultimo, int p_Pilha[10]);              // p_ultimo - parâmetro que define a última posição elemento da Pilha (primeira vaga)
                                                        //            esse valor é passado por referência pois o mesmo é alterado com a retirada do elemento               

                                                        // p_Pilha   - Pilha na qual o conteúdo (p_valor) será incluído



int main() {
   setlocale(LC_ALL,"portuguese");

   int Pilha[10];
   int op;        // Opção do parâmetro
   int valor;     // Valor a ser incluído / retirado da Pilha. Se valor = -1, significa Pilha vazia   
   int ultimo;   // Variável que define a última posição da Pilha (primeira vaga)   
   int res;      // Recebe o retorno do resultado das funções inclui
                 // função inclui 1 - Pilha Cheia    0 - Inclusão OK
  
  
   printf("----------------------------------\n");
   printf("1 - Incluir\n");
   printf("2 - Retirar\n");   
   printf("3 - Listar \n");      
   printf("4 - Sair \n");         
   printf("----------------------------------\n");   
   
   printf("\n\nInforme uma opção para Pilha: \n\n");
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
   
      printf("\n\nInforme uma opção para Pilha: \n\n");
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
	
	printf("\n\n Conteúdo da Pilha\n\n");
	
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
   
