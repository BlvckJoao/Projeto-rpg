#IFNDEF STRUCTS_H
#DEFINE STRUCTS_H

#DEFINE MAX 100

typedef enum{
    HUMANO,
    ELFO,
    ANAO,
    SHEDER,
    BERSERKIR,
    MERMEDE,
}traca;

typedef enum{
    GUERREIRO,
    LADINO,
    MAGO,
    BARBARO,
    BARDO,
    CLERIGO,
    ENGENHEIRO,
    ARQUEIRO,
}tclasse;

typedef enum{
    HUMANOIDE,
    ANIMAL,
    MONSTRO,
}tbixo;

typedef enum{
   ARMA,
   ARMADURA,
   CONSUMIVEL,
}tclasseitem;

typedef struct{
    int forca;
    int agilidade;
    int vigor;
    int intelecto;
    int carisma;
    int sabedoria;
}tstats;

//ficha para itens

typedef struct{
    char nome[20];
    tclasseitem tipo;
    int efeito;
    int peso;
}titem;

//ficha para personagem

typedef struct{
    char nome[MAX];
    int level;
    float experiencia;
    traca raca_pers;
    tclasse classe_pers;
    tstats status_pers;
    titem inventario[];
    titem arma, armadura;
    int max_inventario;
    int vida, max_vida;
    int mana, max_mana;
}tpersonagem;

//ficha para entidades nao jogaveis (inimigos, npcs, etc)

typedef struct{
     char nome[MAX];
     tbixo bixo_ent;
     int vida;
     tstats stats_ent;
}tentidade;

tpersonagem criar_personagem();

#ENDIF
