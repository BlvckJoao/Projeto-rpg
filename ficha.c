#include <stdio.h>
#include <string.h>
#define MAX 100

// estruturas para subtipos

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

int main(int argc, char* argv[]){

    tpersonagem personagem;
    int max_pontos_stats = 72;
    int esc_raca;
    int loop = 0;
    
    //nome do personagem
    
    do{
    
    printf("Digite o nome do personagem: ");
    scanf(" %[^\n]", personagem.nome);
    printf("\nO nome de seu personagem e %s. Deseja prosseguir? (Digite 0 para não ou 1 para sim)  \n", personagem.nome);
    scanf("%d", &loop);
     if (loop == 0) {
            printf("Você decidiu reescolher o nome.\n");
        }
    }while(loop == 0);
    printf("Você decidiu prosseguir com o personagem: %s\n", personagem.nome);
    
    loop = 0; //reset do loop para ser utilizado de novo
    
    //ESCOLHA DE RACA
    
    do{
 
    printf("\nDe qual raça ele seria? (escolha digitando a opção com numero)\n");
      printf("\n 1.HUMANO: Versateis e equilibrados, capazes de fazer qualquer coisa com expertise");
      printf("\n 2.ELFOS: Ageis e inteligentes, possuem proeficiencia com magia e conhecimento");
      printf("\n 3.ANOES: Seres robustos e resistentes, possuem vigor inesgotavel");
      printf("\n 4.SHEDERS: Seres das sombras, mestres da agilidade e precisão");
      printf("\n 5.BERSERKIR: Guerreiros implacaveis, possuem força e resistencia descomunal");
      printf("\n 6.MERMEDES: Mestres da diplomacia, possuem poder na manipulação e lábia");
      
      printf("\n Escolha: ");
      
    scanf("%d", &esc_raca);
    personagem.raca_pers = esc_raca - 1;
    
    switch(esc_raca){
        
        case 1:
         printf("\nDeseja que %s seja um humano?" personagem.nome);
        
        case 2:
         printf("\nDeseja que %s seja um elfo?" personagem.nome);
         
        case 3:
         printf("\nDeseja que %s seja um anao?" personagem.nome);
         
        case 4:
         printf("\nDeseja que %s seja um sheder?" personagem.nome);
         
        case 5:
         printf("\nDeseja que %s seja um berserkir?" personagem.nome);
         
        case 6:
         printf("\nDeseja que %s seja um mermede?\n" personagem.nome);
         
        default:
         printf("\nEscolha invalida");
    
    }
    printf("\nRaca escolhida com sucesso!!!");
    
    printf("\nVamos ditribuir alguns stats, cada stat vai de 1 a 20, o maximo de pontos a distribuir é 72");
    
    if(max_pontos_stats > 0){
        printf("\nDigite a força de %s: ", personagem.nome);
        scanf("%d", &personagem.status_pers.forca);
        printf("\nDigite a agilidade de %s: ", personagem.nome);
        scanf("%d", &personagem.status_pers.forca);

    }

    return 0;
}
