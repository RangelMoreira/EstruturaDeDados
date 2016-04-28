#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

void ordena_por_contagem(int vet[], int ord[], int n){
    int i,j,p;
   //determinar a posição de cada elemento do vetor      //quando ordenado 
   for(i=0;i<n;i++){
       p=0;
       for(j=0;j<n;j++)
           if (vet[i]>vet[j]) p++;
       ord[p]=vet[i];
    } 


void ordenaRepetidos(int *origem,int *dest,int tam){	
	    int i,j,p,cn=0,c=0,ct=0;
	    int vet[tam];
  
   	   
	   for(i=0;i<tam;i++){
        c=0;
		for(j=1;j<tam;j++){
	      if (origem[i]==origem[j]){
		    c++; 
		  }
       }    
       if (c>1){
         
        dest[i]=origem[i];
		 
		 printf("%\n%i\n",origem[i]);  
	   }
    }
 
      
      //ordena
 /*    
   for(i=0;i<tam;i++){
       p=0;
       for(j=0;j<tam;j++)
           if (vet[i]>vet[j]) p++;
       dest[p]=vet[i];
    } 

}
*/
}
 int main()
 {
 		int t=0,b=0;
		
       int vet[t];
       int ord[t];
		srand(time(NULL));
		printf("\nDigite o taanho do vetor\n");
		scanf("%i",&t);
		int *p= (int*) malloc(t);
        
		for(int i=0;i<t;i++){
			vet[i]=rand()%t+1;
		}
        ordena_por_contagem(vet,ord,t);
	/*
		printf("\nreptidos\n");
		for(int i=0;i<t;i++){
			
			  printf("%d \n",ord[i]);
		}
  	    printf("\nnao reptidos\n");
  	    */
        for(int i=0;i<t;i++){
  	    	
			printf("%d \n",ord[i]);
		}
		system("pause");
	    return 0;
 }