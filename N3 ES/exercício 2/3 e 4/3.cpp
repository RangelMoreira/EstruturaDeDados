#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
	FILE *fp;
	char p[15];
	fp=fopen("palavras.dat","wt");
	do{
	  printf("Digite uma palavra para ser salva");
	  scanf("%s",p);
	  fputs(p,fp);
	   fputs("\n",fp);
	 }while(strcmp(p,"fim")!=0);
	return 0;
}