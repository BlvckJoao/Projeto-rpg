#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "structs.h"

void MostrarInventario(tpersonagem personagem){
  
  for(int i; i < personagem.max_inventario; i++){
    
    if(personagem.inventario[i] != NULL){
    printf("\n%d. %s", i+1, personagem.inventario[count].nome);
  } 
    return;


void PegarItem(titem item){

  int opcao;
  
    printf("\nVocê achou um %s, deseja pega-lo? (digite 1 para sim ou 0 para não)", item.nome);
    scanf("%d", &opcao);

    if(opcao == 1){
      
      for(int i = 0; i < personagem.max_inventario; i++){
        
        if(personagem.inventario[i] == NULL){
          
          personagem.inventario[i] = malloc(sizeof(titem));
          personagem.inventario[i] = item;

          printf("\nVocê pegou o %s", personagem.inventario[i].nome);
          
          return;
        }else{
          printf("\nInventario esta cheio, largue um item para pegar o %s", item.nome);
          
          return;
        }
      
    }else{
      printf("\nVocê decidiu não pegar o %s", item.nome);
      
      return;
    }
}

    

void UsarItem(int item_escolhido){

   int check;
  
   if(personagem.inventario[item_escolhido] != NULL){

     switch(personagem.inventario[item_escolhido].tipo){
       
       case ARMA:
         personagem.arma = personagem.inventario[item_escolhido];
         personagem.inventario[item_escolhido] = NULL;

         printf("Voce equipou a %s", personagem.arma.nome);


       case ARMADURA:
        personagem.armadura = personagem.inventario[item_escolhido];
        personagem.inventario[item_escolhido] = NULL;

        printf("Voce equipou a %s", personagem.armadura.nome);

       
       case CONSUMIVEL:
         if(personagem.vida < personagem.max_vida){
          
          check = personagem.vida + personagem.inventario[item_escolhido].efeito;

          if(check > personagem.max_vida){
            personagem.vida = personagem.max_vida;
          }else{
            personagem.vida = check;
          }
          personagem.inventario[item_escolhido] = NULL;
          printf("\nVoce usou o %s e recuperou %d de vida", personagem.invrntario[item_escolhido].nome,  personagem.inventario[item_escolhido].efeito);
     }
     return;
       
   }else{
     printf("\nItem nao existe");
     return;
   }
    

void LargarItemFora(int item_escolhido){

  if(personagem.inventario[item_escolhido] != NULL){
    
  printf("\nDeseja largar o %s", personagem.inventario[item_escolhido].nome);
  scanf("%d",&opcao);
  
  if(opcao == 1){
   
    printf("\nVoce largou o %s", personagem.inventario[item_escolhido].nome);
    personagem.inventario[item_escolhido] = NULL;
    return;
    
  }else{
    
    printf("\nVoce não largou o %s",personagem.inventario[item_escolhido].nome);
    return;
  }
}
}else{
  printf("\nItem nao existe");
  return;
}
