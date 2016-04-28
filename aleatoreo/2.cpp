#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <time.h>
void gera10(int tam,int *vet){
	int aux, c=0,i=0;
	do{
      c=0;
      aux=rand()%10+1;//gera numeros até 0 nuero 10
	  for (int j=0;j<tam;j++){
		 if (aux==vet[j]){ //faz a comparação para ver se o valor gerado ja aparaece no vetor
		  c++;//faz contagem de valores
		 }
	  }
	  if (c==0){//caso o numero de valores reptidos seja 0 é feita a inerção
	   vet[i]=aux;
	   i++;
	  }
	  
	}while(i<tam);
	
}

int main(void)
{
	int t=0;
    int *p =(int *)malloc(t);
    int vet[t];
    srand(time(NULL));
	do{
	   printf("\ndigite o tamanho do vetor\n");
       scanf("%d",&t); 	
	}while((t<0)||(t>10));
	
    gera10(t,vet);
    
    for(int i=0;i<t;i++){
		printf("%i \t",vet[i]);
	}
	system("pause");
	return 0;
}