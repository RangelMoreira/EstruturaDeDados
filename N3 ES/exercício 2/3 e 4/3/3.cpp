#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
	FILE *fp;
	char p[15];
	fp=fopen("palavras2.txt","wt");//abre o arquivo palavra2.txt
	do{
	  printf("Digite uma palavra para ser salva");
	  scanf("%s",p);
	  if (strcmp(p,"fim")!=0){//compara a string com a palavra fim 
	     //caso a palavra não seja fim é feita a incerção
		 fputs(p,fp);
	     fputs("\n",fp);
	  }
	 }while(strcmp(p,"fim")!=0);//repete enquanto a string for difrtente de fim
	return 0;
}