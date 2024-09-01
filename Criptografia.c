#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 60

char chave[12]="CRIPTOGRAFIA";

void criptografar(char* mensagemOrig,char* mensagemCripto,char* chave){
    int i;//variável de controle de loop;
    
    mensagemCripto[MAX] = mensagemOrig[MAX] ^ chave[MAX];
        
    //sobrescrevendo o vetor mensagemOrig
    for(i=0;i<=MAX;i++){
       mensagemOrig[i]=0;
    }
    //---------------------
}

void descriptografar(char* mensagemCripto, char* resultado, char* chave){
        resultado[MAX] = mensagemCripto[MAX] ^ chave[MAX];
}

int main(){
    char mensagemOrig[MAX];
    char mensagemCripto[MAX];
    char resultado[MAX];
    int tm;//tamanho mensagem
    scanf("%s",mensagemOrig);
    tm=strlen(mensagemOrig);
    
    if(tm > 60) {
        printf("ERRO - A mensagem deve possuir tamanho m ́aximo de 60 caracteres.\n");
        return(0);

     }
    criptografar(mensagemCripto,mensagemOrig,chave);
    
    descriptografar(mensagemCripto,resultado,chave);


    printf("Mensagem Cifrada: %d\n",mensagemCripto);
    printf("Mensagem Original: %s\n",resultado);
}