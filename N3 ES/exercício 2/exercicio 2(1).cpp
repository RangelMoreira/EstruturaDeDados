#include <stdio.h>
#include <stdlib.h>



int main(){
	int soma=0,nl=0;
	int c;
	FILE *fp;
	fp=fopen("Numeros.txt","rt");//abre o arquivo numeros.txt
	if(fp==NULL){
		printf("Erro");
		exit(1);
	}
    while(fscanf(fp,"%d",&c)==1){//pega string por string da linha
    	printf("\n%d\n",c);//mostra o npumero guardado na variavel "c"
    	soma=soma+c;//faz a soma dos npumeros no arquivo txt
    }
	fclose(fp);//fecha o arquivo
	printf("\n %d",soma);//mostra o resultado da soma
}
