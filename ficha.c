#include <stdio.h>
#include <string.h>
#define MAX 100

// estruturas para subtipos

typedef enum{
    HUMANO,
    ELFO,
    SHEDER,
    GORHAM,
    MERMEDE,
}traca;

typedef enum{
    GUERREIRO,
    LADINO,
    MAGO,
}tclasse;

typedef struct{
    int forca;
    int agilidade;
    int vigor;
    int intelecto;
    int carisma;
    int sabedoria;
}tstats;

typedef struct{
    int luta;
    int mira;
    int percepcao;
    int acrobacia;
    int cura;
    int conhecimento;
    int fortitude;
    int furtividade;
    int atletismo;
}tpericias;

//ficha para personagem

typedef struct{
    char nome[MAX];
    int level;
    float experiencia;
    traca raca_pers;
    tclasse classe_pers;
    tstats status_pers;
    tpericias pericias_pers;
    int vida;
    int mana;
}tpersonagem;


//FUNÇÃO AINDA EM DESENVOLVIMENTO

int TesteCriarPersonagem(int argc, char* argv[]){

    tpersonagem personagem;
    int max_pontos_stats = 72;

    printf("digite o nome do personagem: ");
    fgets(personagem.nome, MAX, stdin);
    printf("\nVamos ditribuir alguns stats, cada stat vai de 1 a 20, o maximo de pontos a distribuir é 72");
    
    if(max_pontos_stats > 0){
        printf("\nDigite a força de %s: ", personagem.nome);
        scanf("%d", &personagem.forca);

        printf("\nDigite a agilidade de %s: ", personagem.nome);
        scanf("%d", &personagem.forca);
    }

    return 0;
}