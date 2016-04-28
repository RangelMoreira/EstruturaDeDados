#include <stdio.h>
#include <stdlib.h>
void  bolha_rec(int *vet, int tam){
 int i;
 int aux, ver=0;
 
 for (i=0;i<tam-1;i++){
	if (vet[i]>vet[i+1]){
		aux=vet[i];
		vet[i]=vet[i+1];
		vet[i+1]=aux;
		ver=1;//verifica se ocorreu troca
   	}
  }
  if (ver!=0)//verifiva se "ver" é diferente de zero
  	//caso seja nenhuma troca ocorreu e é subtraido 1 da variavel "tam" 
    //quando função é chamada
  	bolha_rec(vet, tam-1);
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
 
 
bolha_rec(vet,t);
 for (int i=0;i<t;i++){
	 printf("%i \t",vet[i]);
 }	
   system("pause");
	return 0;
}