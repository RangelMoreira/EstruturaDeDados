#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int Busca(int *vet,int t, int b){
	for (int i=0;i<t;i++){//percorre todo o vetor
		if(b==vet[i])//verifica se o valor mandado por parametro e igual ao do vetor  
			return i;//retona indice
	}
	return -1;//caso contrario retorna retorna -1
}

int main()
{
	srand(time(NULL));
	int aux=0,c=0,t=0,j=0, b=0;
	int *p= (int*) malloc(t);
	int vet[t];
	printf("digite o tamanho do vetor\n");
	scanf("%i",&t);
	
	do{
		c=0;
		aux=rand()%t+1;
		for(int i=0;i<t;i++){
			if (aux==vet[i]){
				c++;
			}
		}
		if(c==0){
			vet[j]=aux;
			j++;
		}
		
	}while(j<t);
	
	printf("\ndigite um valor para ser buscado\n");
	scanf("%i",&b);
	 if (Busca(vet,t,b)!=-1){
		printf("\nnumero  encontrado na posicao %i\n",Busca(vet,t,b)); 
	 } else{
		 printf("\nnumero nao encontrado\n");
	 }

	system("pause");
	return 0;
}