#include "arv.h"
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "lista.h"

Arv *criaArvore(Arv *A, Lista *L){
   int tr,i=0;
   int c=0;
   int vet[c];
   Lista *a; 
   Arv *p;
   a=L;

    //faz a contagem de quantos valores tem na lista
    for(a=L;a!=NULL;a=a->prox){  
       c++;
    }
    //aloca valor para uso em um vetor
	int *t = (int *)malloc(c);
  	
  	//copia os valores da lista para o vetor
    for(a=L;a!=NULL;a=a->prox){
	    vet[i]=a->info;
	    i++;
    }
    
	//insere os valores na arvore
    for (i=0;i<c;i++) {
		A=abb_insere(A,vet[i]);
		//printf("%i \t",vet[i]);
	} 

	abb_imprime1(A); 	
    }

int main()
{
	int i;
	Arv *a;
    Lista *l; //declara uma lista não inicializada
    a=abb_cria();
    
    l=cria_lista(); //inicializa a lista
    l=insere_lista(l,10); //insere o elemento 10 
    l=insere_lista(l,20); //insere o elemento 20
    l=insere_lista(l,30); //insere o elemento 30
     
   
	criaArvore(a,l);
    
    printf("\n\n");
    system("pause");
    return 0;
}              
