#include<stdio.h>
#include<stdlib.h>


typedef struct no{
    int valor;
    struct no *direita, *esquerda;
}NoArv;

NoArv* inserir_versao_1(NoArv *raiz, int num){
   if(raiz == NULL){
       NoArv *aux = (NoArv*)malloc(sizeof(NoArv));
       aux->valor = num;
       aux->esquerda = NULL;
       aux->direita = NULL;
       return aux;
   }
   else{
      if(num < raiz->valor)
          raiz->esquerda = inserir_versao_1(raiz->esquerda, num);
      else
          raiz->direita = inserir_versao_1(raiz->direita, num);
          return raiz;
        
   }

}

void inserir_versao_1_Imprimir(NoArv *raiz){
    if(raiz){
      printf("%d ", raiz->valor);
      inserir_versao_1_Imprimir(raiz->esquerda);
      inserir_versao_1_Imprimir(raiz->direita);
    }
}

void inserir_versao_2_imprimir_ordenada(NoArv *raiz){
    if(raiz){
        inserir_versao_2_imprimir_ordenada(raiz->esquerda);
        printf("%d ", raiz->valor);
        inserir_versao_2_imprimir_ordenada(raiz->direita);
    }

}

int main(){

    NoArv* raiz = NULL;
    int opcao,valor;

    do{
        
        printf("\n\t0 - sair\n\t1 - Inserindo o numero\n\t2 - imprimindo os numeros\n\n");
        scanf("%d",&opcao);

        switch(opcao){
        case 1:
             printf("informe o valor ");
             scanf("%d ", &valor);
             raiz = inserir_versao_1(raiz, valor);
            break;
        case 2:
            printf("Imprimindo os elementos desogarnizado\n\n");
            printf("\n");
            inserir_versao_1_Imprimir(raiz);
            printf("Imprimindo os elementos organizado\n\n");
            printf("\n");
            inserir_versao_2_imprimir_ordenada(raiz);
            break;
        default:
            if(opcao != 0)
               printf("Imprimindo os elementos desogarnizado\n");
           
        }
    }while(opcao == 0);
     return 0;
}