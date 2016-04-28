#include <stdio.h>
#include <stdlib.h>
#include "arv.h"
int arvoreVazia(Arv* a)//Verifica se a �rvore n�o est� vazia
{
    return a == NULL;//se ela n�o estiver vazia retorna NULL
}

void mostraImpares(Arv* Tree)
{
     if(!arvoreVazia(Tree)) //travessia em ordem
     {
         mostraImpares(Tree->esq); //Passa pela parte esquerda da �rvore
         if(Tree->info%2==1)//teste de l�gica para saber se o n�mero � impar
            printf("%d ", Tree->info);//mostra dados encontrados no n� da �rvore
         mostraImpares(Tree->dir);//passa pela parte esquerda da �rvore
      }
}
 int main(){
 	Arv *a;
 	a=abb_cria();
 	int c,v;
    do{
		printf("Digite um valor para a lista \n");
		scanf("%i",&v);
		a=abb_insere(a,v);
		printf("\nDeseja continuar 1-sim 2-nao \n");
		scanf("%i",&c);
	}while(c==1);	 
	 mostraImpares(a);
    return 0;
 }