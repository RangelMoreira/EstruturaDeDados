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

	//insere os valores na arvore
    for (a=L;a!=NULL;a=a->prox) {
		
		A=abb_insere(A,a->info);
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
