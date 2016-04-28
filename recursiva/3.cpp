#include <stdio.h>
#include <stdlib.h>

int  buscavetor (int *vet, int tam, int  valor){
	if (tam>0){// se o tamaho fo maior que zero
//verifica se valor contido naquele indice do vetor é igual ao val procurado  
		if (vet[tam]==valor){
		//caso seja, retorna valor
			return valor;
			
		}else{
			//senão retorna a função o valor diminudo na variavel tam
			return buscavetor(vet,tam-1,valor);
		}
		
	}
	return -1;
}
int main()
{
 int vet[10];
 int val,t=0;
 int *p = (int *)malloc(t);
 printf("\ndigite o tamanho do vetor\n");
 scanf("%i",&t);
 printf("digite %i valores\n",t);
 for (int i=0;i<t;i++){
	 scanf("%i",&vet[i]);
 }
 printf("\ndigite qual vaor deseja fazer a busca\n");
 scanf("%i",&val);
 printf("%i",buscavetor(vet,t,val));	
	return 0;
}