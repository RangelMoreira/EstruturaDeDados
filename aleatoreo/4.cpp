#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void EscreveNumeros(int t,int b,int *vet){
	 int c=0;
	for(int i=0;i<t;i++){
	  if(vet[i]==b){ //verifica se a posição do vetor é igual a do valor de busca
          printf("\n posicao %i do valor %i \n",i,vet[i]);// caso seja escreve o valor
	    c++;//adiciona um ao contador
       }	
	  
	  
	}
	if (c==0){//se o contador for igual a zero, sinal que não encontrou o numero
		  printf("valor nao encontrado\n");
	  }	
}

int main()
{
		int t=0,b=0;
		
       int vet[t];
		srand(time(NULL));
		printf("\nDigite o taanho do vetor\n");
		scanf("%i",&t);
		int *p= (int*) malloc(t);
		for(int i=0;i<t;i++){
		  //scanf("%i",&vet[i]);	
          vet[i]=rand()%t;
		}
	
		printf("\nDigite o valor para a busca\n");
		scanf("%i",&b);
         	EscreveNumeros(t,b,vet);
		system("pause");
		
	return 0;
}