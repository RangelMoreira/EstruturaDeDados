#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//uso do fseek

int main(){
    FILE *fp;
    float num[10];
    float vet[10];
    printf("Digite numeros inteiros\n");
    for(int i=0;i<10;i++){
       scanf("%f",&num[i]);
      
   }
    fp=fopen("vetBin.bin","wb");//gravação binario (gera novo arq)
    fwrite(num, sizeof(float),10,fp);
    fclose(fp);
    fp=fopen("vetBin.bin","rb");
    fseek(fp,-20*sizeof(float),SEEK_END); //SEEK_CUR ou SEEK_SET
    fread(vet, sizeof(float),10,fp);
    printf("\nConteúdo do Arquivo\n");
    for(int i=0; i<10;i++)
        printf("%f\t",vet[i]);
    printf("\n\nNumeors Pares\n");
    for(int i=0;i<10;i++){
    	if(!((int)vet[i] % 2)){
    		printf("%f\t",vet[i]);
    	}
    }
    printf("\n\nnumeros impares\n");
    for(int i=0;i<10;i++){
    	if((int)vet[i]%2){
    		 printf("%f\t",vet[i]);
    	}
    }
    printf("\n\n");   
    system("pause");
    return 0;
}


