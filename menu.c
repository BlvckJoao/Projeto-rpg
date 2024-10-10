#include <stdio.h>
#include <locale.h>

typedef struct{
    char hab[4];
}tAtaque;

tAtaque ataque;


void atack(char ataque[4]){
    for (int i = 1; i < 5; i++){
        printf("\n%d - %s", i, ataque[i]);
    }
    scanf("\n selecione um ataque: ");
}

void inventario(char iventario[]){

}


void menu_inte (){
    int opcao;

    setlocale(LC_ALL, "portuguese");

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

int main(){
    menu_inte();
}
