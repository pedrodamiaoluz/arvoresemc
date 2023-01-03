#include<stdio.h>
#include<stdlib.h>
#include "funcoes.h"

int main(){

    NoArv *raiz = NULL;
    int opcao,numero;

    do{
        
       menu();

        printf("informe a opcao desejada ");
        scanf("%d",&opcao);

        switch(opcao){
        case 1:
            
            printf("informe o numero ");
            scanf("%d ",&numero);
            raiz = inserir_versao_1(raiz,numero);
            break;
        case 2: 
            inserir_versao_1_Imprimir(raiz);
            break;
        case 3:
            inserir_versao_2_imprimir_ordenada(raiz);
            break;

            default:
            break;
        }

    }while(opcao);

    return 0;
}