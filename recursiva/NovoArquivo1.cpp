#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double juroscompostos(double valor, double taxa, int meses){
 
  if (meses>0){
  	valor=valor*taxa*meses;
    return valor+juroscompostos(valor,taxa,meses-1);
	   
  }
	//return valor+juroscompostos(valor,taxa,meses-1);

    
}
int main()
{
int n;
double c,i;
printf("Digite o tempo\n");	
scanf("%i",&n);
printf("\nDigite o capital\n");	
scanf("%d",&c);
printf("\nDigite o taixa\n");	
scanf("%d",&i);
juroscompostos(c,i,n);
	return 0;
}