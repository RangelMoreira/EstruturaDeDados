#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
void buscalista (Lista *l, int valor) {
	Lista *li;
	if (l!=NULL){
		if(l->codigo==valor){//verifica se o codigo é igual ao do valor da variavel
			//caso seja exibe os valores referentes encontrados
			  printf("\ncodigo enontrado\n");
			  printf("\nCÓDIGO %i\t",l->codigo);
              printf("\nESTOQUE %i\t",l->estoque);
              printf("\n");		
	          return;
		}else{ 
         //senão retorna a proxima posição da lista e o valor a ser procurado 
			buscalista(l=l->prox,valor);
			
		}
		
	}
	else{
	   printf("\ncodigo nao enconrado\n");
	    return;
	}
}
int main(){
  int cod,est,b;
  Lista *li = cria_lista();
  for(int i=0;i<5;i++){
	 printf("\ndigite o codigo\n");
	 scanf("%i",&cod);
	 printf("\ndigite a qtd em estoque\n");
	 scanf("%i",&est);
	 li=insere_lista(li,cod,est);
  }	
  printf("digite o valor que deseja buscar");
  scanf("%i",&b);
   buscalista (li,b);
	return 0;
}