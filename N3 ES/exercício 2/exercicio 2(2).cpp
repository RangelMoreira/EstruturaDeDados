#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp;
	//frases que serão guardadas em variaveis para serem colocadas no arquivo mais tarde
    char frase1[]="mesa carro";
    char frase2[]="bola";
    char frase3[]="copo bola prego";
    char frase4[]="cadeira pia";
    char frase5[]="janela";
    char frase6[]="bola";
    char endline='\n';
    fp=fopen("palavras.dat","wt");//cria o arquivo que as frases serão gravadas
    //grava as frases que estão guardadas nas variaveis
    fputs(frase1,fp);
    fputc(endline,fp);
    fputs(frase2,fp);
    fputc(endline,fp);
    fputs(frase3,fp);
    fputc(endline,fp);
    fputs(frase4,fp);
    fputc(endline,fp);
    fputs(frase5,fp);
    fputc(endline,fp);
    fputs(frase6,fp);
    fputc(endline,fp);
    fclose(fp);//fecha o arquivo
    return 0;
}
