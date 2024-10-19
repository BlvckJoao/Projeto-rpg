#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "structs.h"

int random_num(int intervalo){

    srand(time(NULL));
    int numero_aleatorio = (rand() % intervalo) + 1;
    }
    int atack(int dano, int atk, int defesa){
    int intervalo = 20
    int teste = random_num(intervalo);

    if(teste + atk > defesa/2 || teste < 19){
       return dano;

    }else if(teste > 18){
      return dano * 2;

    }else if(teste + atk < defesa/2){
      return 0;
    }
}

void combate(tpersonagem personagem, tentidade entidade){

    strcpy(personagem.nome, "Josias");
    personagem.vida = 20;
    personagem.mana = 4;
    personagem.classe_pers = GUERREIRO;
    personagem.raca_pers = HUMANO;
    personagem.stats_pers.forca = 12;
    personagem.stats_pers.agilidade = 12;
    personagem.stats_pers.vigor = 12;
    personagem.stats_pers.carisma = 12;
    personagem.stats_pers.intelecto = 12;
    personagem.stats_pers.sabedoria = 12;

    strcpy(entidade.nome, "Chupacu");
    entidade.vida = 20;
    entidade.bixo_ent = MONSTRO;
    entidade.stats_ent.forca = 12;
    entidade.stats_ent.agilidade = 12;
    entidade.stats_ent.vigor = 12;
    entidade.stats_ent.carisma = 12;
    entidade.stats_ent.intelecto = 12;
    entidade.stats_ent.sabedoria = 12;

    printf("O %s se aproxima de %s", entidade.nome, personagem.nome);

     printf("\n  Menu \n");
        printf("\n1 - Ataque\n2 - Inventario\n3 - Fugir\n\nDigite sua escolha: ");
        scanf("%d", &opcao);

        switch (opcao){
            case 1:
                atack(ataque[4].hab);
                break;

            case 2:
                iventario();
                break;
            case 3:
        }
    }

}

void inventario(char iventario[]){

}


void menu_inte (){
    int opcao;

    setlocale(LC_ALL, "portuguese");

    printf("\n  Menu \n");
    printf("\n1 - Combate\n2 - Inventario\n3 - Fugir\n\nDigite sua escolha: ");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            combate();
            break;

        case 2:
            iventario();
            break;
        case 3:
    }
}

int main(){
    menu_inte();
}
