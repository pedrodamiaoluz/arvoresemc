#include<stdio.h>
#include<stdlib.h>
#include "prototipo.h"

 struct no{
    int valor;
    struct no *direita;
    struct no *esquerda;
};

void menu(void){
     printf("\n\t0 - sair\n\t1 - Inserindo o numero\n\t2 - imprimindo os numeros\n\n");
}

NoArv* inserir_versao_1(NoArv *raiz, int num){

   if(raiz == NULL){
       NoArv *aux = (NoArv*)malloc(sizeof(NoArv));
       aux->valor = num;
       aux->esquerda = NULL;
       aux->direita = NULL;
       return aux;
   }
   else{
      if(num < raiz->valor){
          raiz->esquerda = inserir_versao_1(raiz->esquerda, num);
      }
      else{
          raiz->direita = inserir_versao_1(raiz->direita, num);
          return raiz;
      }
        
   }

}

void inserir_versao_1_Imprimir(NoArv *raiz){
     
    if(raiz){

      printf("%d ",raiz->valor);
      inserir_versao_1_Imprimir(raiz->esquerda);
      inserir_versao_1_Imprimir(raiz->direita);    
    }
    
}

void inserir_versao_2_imprimir_ordenada(NoArv *raiz){
      
    if(raiz){
        inserir_versao_2_imprimir_ordenada(raiz->esquerda);
        printf("%d ",raiz->valor);
        inserir_versao_2_imprimir_ordenada(raiz->direita);       
    }
    
}









