#include <stdio.h>
#include <stdlib.h>

int soma(int a, int b){
if (b<a){// se o valor de B é menor que o maior valor   	 
 	return soma(a,b+1)+b;
 //retorna a funçãa add +1 ao valor de B e somando o valor antigo
}	
	
} 

int main()
{
	int v1,v2,aux;
	printf("Digite dois valores\n");
	scanf("%i",&v1);
	scanf("%i",&v2);
	if (v2>v1){
		aux=v1;
		v1=v2;
		v2=aux;		
	}
	printf("%i",soma(v1,v2));
	
	return 0;
}