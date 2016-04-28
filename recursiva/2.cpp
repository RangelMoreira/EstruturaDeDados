#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>
double juroscompostos(double valor, double taxa, int meses){

     if (meses>0){
  	  
	    valor=valor+valor*(taxa/100);	    
		printf("%lf\n",valor);
		return juroscompostos(valor,taxa,meses-1);

     }
     return valor;
}

int main()
{
int n;
float c,i;
printf("\nDigite o capital\n");	
scanf("%lf",&c);
printf("\nDigite o taixa\n");	
scanf("%lf",&i);
printf("Digite o tempo\n");	
scanf("%i",&n);


printf("\n %lf",juroscompostos(c,i,n));

//printf("\n %f",juroscompostos(1,2,3));
	return 0;
}