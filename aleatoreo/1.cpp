#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <time.h>
void prenche(int tam, int *vet){
	
	for(int i=0;i<tam;i++){//repete o enquao o vetor não estiver cheio
      vet[i]=rand()%30+1;//gera valores vareados de um à 30
		
	}
}

int main()
{
 
  int t=0;
  int *p = (int *)malloc(t);
  int vet[t]; 
  srand(time(NULL));
  do{
    printf("\ndigite o tamanho do vetor\n");
    scanf("%i",&t);
  }while((t<0)||(t>30));
  prenche(t,vet);
  
  for(int i=0;i<t;i++){
	printf("%i \n",vet[i]);  
  }
	system("pause");	
	return 0;
}