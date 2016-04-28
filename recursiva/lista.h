#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <locale.h>

typedef struct lista{
        int codigo;  
    	int estoque;
		struct lista *prox;
}Lista; //definição da lista


/* retorna uma lista vazia */
  Lista* cria_lista()
 {
    return NULL;
}

/* insere o novo dado no início da lista , e retorna a lista atualizada*/



Lista *insere_lista(Lista *li, int codigo, int estoque){
      Lista *novo=(Lista*) malloc(sizeof(Lista));
      novo->codigo=codigo;
      novo->estoque=estoque;
      novo->prox=li;
      return novo;
}

/* percorre a lista do inicio até o fim mostrando os elementos*/
void exibe_lista(Lista *li){
     Lista *aux;
     for(aux=li;aux!=NULL; aux=aux->prox){
      printf("CÓDIGO %i\t",aux->codigo);
	  printf("ESTOQUE %i\t",aux->estoque);
	  
      printf("\n");
	 }
 }
/* retorna o elemento ou a lista original*/

Lista* retira_lista(Lista* l, int dado)
{
      Lista* ant=NULL; //ponteiro para o anterior
      Lista *aux=l;// ponteiro para percorrer a lista  
      //procura o elemento na lista guardando seu anterior
      while(aux!=NULL && aux->codigo!=dado)       {
            ant=aux;
            aux=aux->prox;
      }
      //verifica se achou o elemento
      if(aux==NULL) {
           printf("\nNao localizado\n");         
           return l; //não achou - retorna a lista
      }
      //retira o elemento
      if (ant==NULL) //primeiro da lista
         l=aux->prox;
      else
        //retira do meio/fim da lista
        ant->prox=aux->prox;
      free(aux);
      return l;
}

/* retorna o elemento ou NULL se não achou*/
void buscaEstoque (Lista *li, int codpro)
{     
//variável usada para percorrer a lista
Lista *a; 
for(a=li;a!=NULL;a=a->prox)
{ 
    if(a->codigo == codpro){
	  printf("CÓDIGO %i\t",a->codigo);
      printf("ESTOQUE %i\t",a->estoque);
      printf("\n");		
	  return;
	}
}         
   printf("codigo não encontrado");
   return;
}