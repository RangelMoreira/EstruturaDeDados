#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "arv.h"
int buscaArvore(Arv *A, int valor){
	if (A==NULL) //se a arore for nula retorna 0
	    return 0;
	if(valor==A->info){ 
//se a variavel valor igual a  a->info retorna 1 pois o valor foi encontrado 
	    return 1;
	}
	 if(valor<A->info){
//se valor  menor que a->info retorna o valor da esquerda	 	
	 	return buscaArvore(A->esq,valor);
	 } 
//senão retorna valor à direita 	 
	 else {
	 	return buscaArvore(A->dir,valor); 
	 }
}
int main()
{
	Arv *a;
	int val=0;
    a=abb_cria();
	do{
	  printf("digite um valor para ser cadastrado ou -1 para encerrar\n");
	  scanf("%i",&val);
	  if (val>0)
	  	a=abb_insere(a,val);
	}while(val>=0);
	printf("digite um valor para busca");
	scanf("%i",&val);
	if (buscaArvore(a,val)==1){
		printf("valor encontrado");
	}else{
			printf("valor nao encontrado");
	}
	
	return 0;
	
}

