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
    BARBARO,
    BARDO,
    CLERIGO,
    ENGENHEIRO,
    ARQUEIRO,
}tclasse;

typedef struct{
    int forca;
    int agilidade;
    int vigor;
    int intelecto;
    int carisma;
    int sabedoria;
}tstats;

//ficha para personagem

typedef struct{
    char nome[MAX];
    int level;
    float experiencia;
    traca raca_pers;
    tclasse classe_pers;
    tstats status_pers;
    int vida;
    int mana;
}tpersonagem;


//FUNÇÃO AINDA EM DESENVOLVIMENTO

int main(int argc, char* argv[]){

    tpersonagem personagem;
    int max_pontos_stats;
    int esc_raca, esc_classe;
    int loop = 0;
    int criacao = 0;

    //nome do personagem


 do{

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
         printf("\nDeseja que %s seja um humano? Deseja prosseguir? (Digite 0 para não ou 1 para sim):\n", personagem.nome);
         break;

        case 2:
         printf("\nDeseja que %s seja um elfo? Deseja prosseguir? (Digite 0 para não ou 1 para sim):\n", personagem.nome);
         break;

        case 3:
         printf("\nDeseja que %s seja um anao? Deseja prosseguir? (Digite 0 para não ou 1 para sim):\n", personagem.nome);
         break;

        case 4:
         printf("\nDeseja que %s seja um sheder? Deseja prosseguir? (Digite 0 para não ou 1 para sim):\n", personagem.nome);
         break;

        case 5:
         printf("\nDeseja que %s seja um berserkir? Deseja prosseguir? (Digite 0 para não ou 1 para sim):\n", personagem.nome);
         break;

        case 6:
         printf("\nDeseja que %s seja um mermede? Deseja prosseguir? (Digite 0 para não ou 1 para sim):\n", personagem.nome);
         break;

        default:
         printf("\nEscolha invalida");
         continue;

    }
    if(esc_raca < 1 && esc_raca > 6){
        printf("\nVoce tera que escolher um numero de 1 a 6\n");
    }else{
        scanf("%d", &loop);
    }
    }while (loop == 0);
    printf("\nRaca escolhida com sucesso!!!");
    loop = 0;

    do{

        printf("\nEscolha a classe de seu personagem (Escolha digitando a opção com numero)\n");
          printf("\n 1.GUERREIRO");
          printf("\n 2.LADINO");
          printf("\n 3.MAGO");
          printf("\n 4.BARBARO");
          printf("\n 5.BARDO");
          printf("\n 6.CLERIGO");
          printf("\n 7.ENGENHEIRO");
          printf("\n 8.ARQUEIRO");

          printf("\n Escolha: ");

        scanf("%d", &esc_classe);
        personagem.classe_pers = esc_classe - 1;

        switch(esc_classe){

            case 1:
             printf("\nDeseja que %s seja um guerreiro? Deseja prosseguir? (Digite 0 para não ou 1 para sim):\n", personagem.nome);
             break;

            case 2:
             printf("\nDeseja que %s seja um ladino? Deseja prosseguir? (Digite 0 para não ou 1 para sim):\n", personagem.nome);
             break;

            case 3:
             printf("\nDeseja que %s seja um mago? Deseja prosseguir? (Digite 0 para não ou 1 para sim):\n", personagem.nome);
             break;

            case 4:
             printf("\nDeseja que %s seja um barbaro? Deseja prosseguir? (Digite 0 para não ou 1 para sim):\n", personagem.nome);
             break;

            case 5:
             printf("\nDeseja que %s seja um bardo? Deseja prosseguir? (Digite 0 para não ou 1 para sim):\n", personagem.nome);
             break;

            case 6:
             printf("\nDeseja que %s seja um clerigo? Deseja prosseguir? (Digite 0 para não ou 1 para sim):\n", personagem.nome);
             break;

            case 7:
             printf("\nDeseja que %s seja um engenheiro? Deseja prosseguir? (Digite 0 para não ou 1 para sim):\n", personagem.nome);
             break;

            case 8:
             printf("\nDeseja que %s seja um arqueiro? Deseja prosseguir? (Digite 0 para não ou 1 para sim):\n", personagem.nome);
             break;

            default:
             printf("\nEscolha invalida");
             continue;

        }
        if(esc_classe < 1 && esc_classe > 8){
            printf("\nVoce tera que escolher um numero de 1 a 8\n");
        }else{
            scanf("%d", &loop);
        }
        }while (loop == 0);
        printf("\nClasse escolhida com sucesso!!!");
        loop = 0;

    do{

        do{

        max_pontos_stats = 72;

    printf("\n\nVamos ditribuir alguns stats, cada estatistica vai de 1 até 20, o maximo de pontos a distribuir em todas é 72");

        printf("\nPontos a distribuir = %d", max_pontos_stats );
        printf("\nDigite a força de %s: ", personagem.nome);
        scanf("%d", &personagem.status_pers.forca);
        max_pontos_stats = max_pontos_stats - personagem.status_pers.forca;

        if(max_pontos_stats > 0){

        printf("\nPontos a distribuir = %d", max_pontos_stats );
        printf("\nDigite a agilidade de %s: ", personagem.nome);
        scanf("%d", &personagem.status_pers.agilidade);
         max_pontos_stats = max_pontos_stats - personagem.status_pers.agilidade;

        }else{ 
          printf("Numero maximo distribuído");
          break;
        }

        if(max_pontos_stats > 0){

        printf("\nPontos a distribuir = %d", max_pontos_stats );
        printf("\nDigite o vigor de %s: ", personagem.nome);
        scanf("%d", &personagem.status_pers.vigor);
         max_pontos_stats = max_pontos_stats - personagem.status_pers.vigor;

        }else{ 
          printf("Numero maximo distribuído");
          break;
        }

        if(max_pontos_stats > 0){

        printf("\nPontos a distribuir = %d", max_pontos_stats );
        printf("\nDigite o intelecto de %s: ", personagem.nome);
        scanf("%d", &personagem.status_pers.intelecto);
        max_pontos_stats = max_pontos_stats - personagem.status_pers.intelecto;

        }else{ 
          printf("Numero maximo distribuído");
          break;
        }

        if(max_pontos_stats > 0){

        printf("\nPontos a distribuir = %d", max_pontos_stats );
        printf("\nDigite o carisma de %s: ", personagem.nome);
        scanf("%d", &personagem.status_pers.carisma);
        max_pontos_stats = max_pontos_stats - personagem.status_pers.carisma;

        }else{ 
          printf("Numero maximo distribuído");
          break;
        }

        if(max_pontos_stats > 0){

        printf("\nPontos a distribuir = %d", max_pontos_stats );
        printf("\nDigite a sabedoria de %s: ", personagem.nome);
        scanf("%d", &personagem.status_pers.sabedoria);
         max_pontos_stats = max_pontos_stats - personagem.status_pers.sabedoria;
        break;

        }else{ 
          printf("Numero maximo distribuído");
          break;
        }
        }while(loop == 0);

        personagem.vida = 16 + (personagem.status_pers.vigor / 4);
        personagem.mana = 4 + (personagem.status_pers.carisma / 4);

        printf("\nSuas estatisticas ficaram assim: ");

        printf("\n\nVida: %d", personagem.vida);
        printf("\nMana: %d", personagem.mana);
        printf("\nForca: %d",personagem.status_pers.forca);
        printf("\nAgilidade: %d",personagem.status_pers.agilidade);
        printf("\nVigor: %d",personagem.status_pers.vigor);
        printf("\nIntelecto: %d",personagem.status_pers.intelecto);
        printf("\nCarisma: %d",personagem.status_pers.carisma);
        printf("\nSabedoria: %d",personagem.status_pers.sabedoria);

        printf("\n\nDeseja continuar com essa ficha ou deseja redistribuir os stats (Digite 0 para não ou 1 para sim):\n ");
        scanf("%d", &loop);
    }while(loop==0);

        printf("\nAqui está a ficha de seu personagem montada:");

        printf("\nNome: %s", personagem.nome);



        switch(personagem.raca_pers){

        case 0:
            printf("\nRaca: Humano");
            break;

        case 1:
            printf("\nRaca: Elfo");
            break;

        case 2:
            printf("\nRaca: Anao");
            break;

        case 3:
            printf("\nRaca: Sheder");
            break;

        case 4:
            printf("\nRaca: Berserkir");
            break;

        case 5:
            printf("\nRaca: Mermede");
            break;
        }


         switch(personagem.classe_pers){
        case 0:
            printf("\nClasse: Guerreiro");
            break;

        case 1:
            printf("\nClasse: Ladino");
            break;

        case 2:
            printf("\nRaca: Mago");
            break;

        case 3:
            printf("\nRaca: Barbaro");
            break;

            break;

        case 6:
            printf("\nRaca: Engenheiro");
            break;

        case 7:
            printf("\nRaca: Arqueiro");
            break;
        }

        printf("\n\nVida: %d", personagem.vida);
        printf("\nMana: %d", personagem.mana);
        printf("\nForca: %d",personagem.status_pers.forca);
        printf("\nAgilidade: %d",personagem.status_pers.agilidade);
        printf("\nVigor: %d",personagem.status_pers.vigor);
        printf("\nIntelecto: %d",personagem.status_pers.intelecto);
        printf("\nCarisma: %d",personagem.status_pers.carisma);
        printf("\nSabedoria: %d",personagem.status_pers.sabedoria);


        printf("\n\nDeseja seguir com %s? (Digite 0 para recriar o personagem ou 1 para continuar): ", personagem.nome);
        scanf("%d", criacao);

 }while(criacao == 0);

        printf("Personagem criado com sucesso!!!");

    return 0;

}
