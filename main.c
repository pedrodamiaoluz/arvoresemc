#include<stdio.h>
#include<stdlib.h>
#include "funcoes.h"

int main(){

    NoArv *raiz = NULL;
    int opcao,valor;

    do{

        menu();

        printf("\nInforme a opcao desejada ");
        scanf("%d",&opcao);

        switch(opcao){

        case 1:
             printf("informe o valor ");
             scanf("%d",&valor); 
             raiz = inserir_versao_1(raiz,valor);
            break;

        case 2: 
            printf("Imprimindo os elementos desogarnizado\n");        
            inserir_versao_1_Imprimir(raiz);
            printf("\n\n");
            printf("Imprimindo os elementos organizado\n");
            inserir_versao_2_imprimir_ordenada(raiz);
            printf("\n");
            break;

        case 0:
            printf("Saiu do programa");
            break;

        default:
               printf("Opcao ivalida\n");
            
        }
    }while(opcao != 0);
    
}