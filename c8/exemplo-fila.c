#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

//  Função que retorna 1 em caso de Fila Cheia e 0 em caso de inclusão Ok                  
int inclui(int *p_ultimo, int p_Fila[10], int p_valor);  // p_ultimo - parâmetro que define a posição do última elemento da Fila (primeira vaga)
                                                         //            esse valor é passado por referência pois o mesmo é alterado com a incluão de um elemento            

                                                         // p_Fila   - Fila na qual o conteúdo (p_valor) será incluído
                                                         //            esse valor é passado por referência pois o mesmo é alterado              

                                                         // p_valor  - valor a ser inserido na fila 


// Função que mostra os elementos da Fila 
void mostra(int p_ultimo, int p_Fila[10]);              // p_ultimo - parâmetro que define a última posição elemento da Fila (primeira vaga)


//  Função que retorna o Primeiro elemento da Fila, caso exista OU - caso a lista esteja VAZIA                  
int exclui(int *p_ultimo, int p_Fila[10]);              // p_ultimo - parâmetro que define a última posição elemento da Fila (primeira vaga)
                                                        //            esse valor é passado por referência pois o mesmo é alterado com a retirada do elemento               

                                                        // p_Fila   - Fila na qual o conteúdo (p_valor) será incluído



int main() {

   int Fila[10];
   int op;        // Opção do parâmetro
   int valor;     // Valor a ser incluído / retirado da Fila. Se valor = -1, significa fila vazia   
   int ultimo;   // Variável que define a última posição da Fila (primeira vaga)   
   int res;      // Recebe o retorno do resultado das funções inclui
                 // função inclui 1 - Fila Cheia    0 - Inclusão OK
	int c;
	for(c=0;c<10;c++){
		Fila[c]=0;
	}
   setlocale(LC_ALL,"portuguese");
  
   printf("----------------------------------\n");
   printf("1 - Incluir\n");
   printf("2 - Retirar\n");   
   printf("3 - Listar \n");      
   printf("4 - Sair \n");         
   printf("----------------------------------\n");   
   
   printf("\n\nInforme uma opção para Fila: \n\n");
   scanf("%d", &op);
   
   ultimo = 0;   // Fila VAZIA   
   
   while (op != 4) {
         
      switch (op) {
      
         case 1:  // Inclui
  
            printf("\n\nInforme o valor a ser incluido na fila: \n\n");
            scanf("%d", &valor);
            
            res = inclui(&ultimo, Fila, valor);
            
            if (res == 1) {  // Se retornar 1, Fila Cheia
               printf("\n\n******FILA CHEIA******\n\n");
            }
            else { 
               printf("\n\nValor %d incluido na Fila \n\n", valor);
            }
            break;
         
         case 2: // Exclui
            valor = exclui(&ultimo, Fila);
            if (valor == -1){                // Se retornar -1, Fila Vazia
               printf("\n\nLista Vazia\n\n");
            }
            else{
               printf ("\n\nO elemento %d foi excluido com sucesso\n\n",valor);
            }                          
            break;

         case 3:  // Mostra
            mostra(ultimo, Fila);
            break;

         default:
            printf("\n\nINVÁLIDO\n\n");
            break;

     }

      printf("\n\n----------------------------------\n");
      printf("1 - Incluir\n");
      printf("2 - Retirar\n");   
      printf("3 - Listar \n");      
      printf("4 - Sair \n");         
      printf("----------------------------------\n");   
   
      printf("\n\nInforme uma opção para Fila: \n\n");
      scanf("%d", &op);

         
   }
   
   system("pause");
   
   return 0;
}

int inclui(int *p_ultimo, int p_Fila[10], int p_valor){   

	if(*p_ultimo==10){
		return 1;
	}else{
		p_Fila[*p_ultimo] = p_valor;
		*p_ultimo = *p_ultimo + 1;
		
	    printf("\n\n Inclui o numero %d na Fila \n\n", p_valor);
	    return 0 ;	
	}
}


void mostra(int p_ultimo, int p_Fila[10]){
	int c;
	
	printf("\n\n Conteúdo da Fila\n\n");
	
	for(c=0;c<p_ultimo;c++){
		printf("%d - ",p_Fila[c]); 
	}

} 


int exclui(int *p_ultimo, int p_Fila[10]){   
	int c,exc;
	if(*p_ultimo==0){
		return -1;
	}else{
		exc=p_Fila[0];
		for(c=0;c<*p_ultimo;c++){
			if(c != *p_ultimo /*&& c < *p_ultimo*/){
				p_Fila[c]=p_Fila[c+1];			
			}
		}
		p_Fila[*p_ultimo-1]=0;
		*p_ultimo=*p_ultimo-1;
		return exc;
	}
}
   
