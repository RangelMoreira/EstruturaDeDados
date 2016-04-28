#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

   void ordenaRepetidos(int origem[], int dest[], int tam){
   int i=0;
   int j=0;
   int k=0;
   for(i=0; i < tam; i++){//percorre o vetor
       k=0;
       for(j=0; j < tam; j++)
       	//verifica se o valor do vetor é maior que de seu indice posterior
           if (origem[i] > origem[j]) k++;
           //faz vetor percorrer enquanto houver numeros reptidos
              while (origem[i] == dest[k]) k++;              
		        dest[k] = origem[i];//faz incerção
    }  
       for (i=0;i < tam; i++)//exibe os valores
          printf("\t %i", dest[i]); 
    }


	int main(){
	 int t=0;
	 int vet[t];
	 int ord[t];
     srand(time(NULL));
	 printf("Digite o tamanho do vetor\n");
	 scanf("%i",&t);
      int *p = (int *)malloc(t);	
     for (int i=0;i<t;i++){
		printf("digite um numero\n");
		scanf("%i",&vet[i]);
		//vet[i]=rand()%t+1; 
	 }
	 ordenaRepetidos(vet,ord,t);
	  for (int i=0;i<t;i++){
	//	printf("%i \t",ord[i]); 
	 }
	 system("pause");
	 return 0;
	}