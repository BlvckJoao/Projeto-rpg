#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "rpgtools.h"

#define MAX 100

// Função para criar o personagem
tpersonagem criar_personagem() {
    tpersonagem personagem;
    int max_pontos_stats;
    int esc_raca, esc_classe;
    int loop = 0;
    int criacao = 0;

    // Nome do personagem
    do {
        do {
            printf("Digite o nome do personagem: ");
            scanf(" %[^\n]", personagem.nome);
            printf("\nO nome de seu personagem é %s. Deseja prosseguir? (Digite 0 para não ou 1 para sim)\n", personagem.nome);
            scanf("%d", &loop);
            if (loop == 0) {
                printf("Você decidiu reescolher o nome.\n");
            }
        } while (loop == 0);
        printf("Você decidiu prosseguir com o personagem: %s\n", personagem.nome);

        loop = 0; // Reset do loop para ser utilizado de novo

        // Escolha de raça
        do {
            printf("\nDe qual raça ele seria? (Escolha digitando a opção com número)\n");
            printf("\n1. HUMANO: Versáteis e equilibrados, capazes de fazer qualquer coisa com expertise");
            printf("\n2. ELFOS: Ágeis e inteligentes, possuem proficiência com magia e conhecimento");
            printf("\n3. ANÕES: Seres robustos e resistentes, possuem vigor inesgotável");
            printf("\n4. SHEDERS: Seres das sombras, mestres da agilidade e precisão");
            printf("\n5. BERSERKIR: Guerreiros implacáveis, possuem força e resistência descomunal");
            printf("\n6. MERMEDES: Mestres da diplomacia, possuem poder na manipulação e lábia");

            printf("\nEscolha: ");
            scanf("%d", &esc_raca);
            personagem.raca_pers = esc_raca - 1;

            switch (esc_raca) {
                case 1:
                    printf("\nDeseja que %s seja um humano? (Digite 0 para não ou 1 para sim)\n", personagem.nome);
                    break;
                case 2:
                    printf("\nDeseja que %s seja um elfo? (Digite 0 para não ou 1 para sim)\n", personagem.nome);
                    break;
                case 3:
                    printf("\nDeseja que %s seja um anão? (Digite 0 para não ou 1 para sim)\n", personagem.nome);
                    break;
                case 4:
                    printf("\nDeseja que %s seja um sheder? (Digite 0 para não ou 1 para sim)\n", personagem.nome);
                    break;
                case 5:
                    printf("\nDeseja que %s seja um berserkir? (Digite 0 para não ou 1 para sim)\n", personagem.nome);
                    break;
                case 6:
                    printf("\nDeseja que %s seja um mermede? (Digite 0 para não ou 1 para sim)\n", personagem.nome);
                    break;
                default:
                    printf("\nEscolha inválida");
                    continue;
            }

            if (esc_raca < 1 || esc_raca > 6) {
                printf("\nVocê terá que escolher um número de 1 a 6\n");
            } else {
                scanf("%d", &loop);
            }
        } while (loop == 0);
        printf("\nRaça escolhida com sucesso!\n");
        loop = 0;

        // Escolha de classe
        do {
            printf("\nEscolha a classe de seu personagem (Escolha digitando a opção com número)\n");
            printf("\n1. GUERREIRO");
            printf("\n2. LADINO");
            printf("\n3. MAGO");
            printf("\n4. BÁRBARO");
            printf("\n5. BARDO");
            printf("\n6. CLÉRIGO");
            printf("\n7. ENGENHEIRO");
            printf("\n8. ARQUEIRO");

            printf("\nEscolha: ");
            scanf("%d", &esc_classe);
            personagem.classe_pers = esc_classe - 1;

            switch (esc_classe) {
                case 1:
                    printf("\nDeseja que %s seja um guerreiro? (Digite 0 para não ou 1 para sim)\n", personagem.nome);
                    break;
                case 2:
                    printf("\nDeseja que %s seja um ladino? (Digite 0 para não ou 1 para sim)\n", personagem.nome);
                    break;
                case 3:
                    printf("\nDeseja que %s seja um mago? (Digite 0 para não ou 1 para sim)\n", personagem.nome);
                    break;
                case 4:
                    printf("\nDeseja que %s seja um bárbaro? (Digite 0 para não ou 1 para sim)\n", personagem.nome);
                    break;
                case 5:
                    printf("\nDeseja que %s seja um bardo? (Digite 0 para não ou 1 para sim)\n", personagem.nome);
                    break;
                case 6:
                    printf("\nDeseja que %s seja um clérigo? (Digite 0 para não ou 1 para sim)\n", personagem.nome);
                    break;
                case 7:
                    printf("\nDeseja que %s seja um engenheiro? (Digite 0 para não ou 1 para sim)\n", personagem.nome);
                    break;
                case 8:
                    printf("\nDeseja que %s seja um arqueiro? (Digite 0 para não ou 1 para sim)\n", personagem.nome);
                    break;
                default:
                    printf("\nEscolha inválida");
                    continue;
            }

            if (esc_classe < 1 || esc_classe > 8) {
                printf("\nVocê terá que escolher um número de 1 a 8\n");
            } else {
                scanf("%d", &loop);
            }
        } while (loop == 0);
        printf("\nClasse escolhida com sucesso!\n");
        loop = 0;

    do{

        do{

        max_pontos_stats = 72;

    printf("\n\nVamos ditribuir alguns stats, cada estatistica vai de 1 atÃ© 20, o maximo de pontos a distribuir em todas Ã© 72");
    

        printf("\nPontos a distribuir = %d", max_pontos_stats );
        printf("\nDigite a forÃ§a de %s: ", personagem.nome);
        scanf("%d", &personagem.status_pers.forca);
        max_pontos_stats = max_pontos_stats - personagem.status_pers.forca;

        if(max_pontos_stats > 0){

        printf("\nPontos a distribuir = %d", max_pontos_stats );
        printf("\nDigite a agilidade de %s: ", personagem.nome);
        scanf("%d", &personagem.status_pers.agilidade);
         max_pontos_stats = max_pontos_stats - personagem.status_pers.agilidade;

        }else{ 
          printf("Numero maximo distribuÃ­do");
          break;
        }

        if(max_pontos_stats > 0){

        printf("\nPontos a distribuir = %d", max_pontos_stats );
        printf("\nDigite o vigor de %s: ", personagem.nome);
        scanf("%d", &personagem.status_pers.vigor);
         max_pontos_stats = max_pontos_stats - personagem.status_pers.vigor;

        }else{ 
          printf("Numero maximo distribuÃ­do");
          break;
        }

        if(max_pontos_stats > 0){

        printf("\nPontos a distribuir = %d", max_pontos_stats );
        printf("\nDigite o intelecto de %s: ", personagem.nome);
        scanf("%d", &personagem.status_pers.intelecto);
        max_pontos_stats = max_pontos_stats - personagem.status_pers.intelecto;

        }else{ 
          printf("Numero maximo distribuÃ­do");
          break;
        }

        if(max_pontos_stats > 0){

        printf("\nPontos a distribuir = %d", max_pontos_stats );
        printf("\nDigite o carisma de %s: ", personagem.nome);
        scanf("%d", &personagem.status_pers.carisma);
        max_pontos_stats = max_pontos_stats - personagem.status_pers.carisma;

        }else{ 
          printf("Numero maximo distribuÃ­do");
          break;
        }

        if(max_pontos_stats > 0){

        printf("\nPontos a distribuir = %d", max_pontos_stats );
        printf("\nDigite a sabedoria de %s: ", personagem.nome);
        scanf("%d", &personagem.status_pers.sabedoria);
         max_pontos_stats = max_pontos_stats - personagem.status_pers.sabedoria;
        break;

        }else{ 
          printf("Numero maximo distribuÃ­do");
          break;
        }
        }while(loop == 0);

        personagem.max_vida = 16 + (personagem.status_pers.vigor / 4);
        personagem.max_mana = 4 + (personagem.status_pers.carisma / 4);
        personagem.max_inventario = 5 + (personagem.status_pers.forca / 4) * 5;
        
        personagem.vida = personagem.max_vida;
        personagem.mana = personagem.max_mana;

        printf("\nSuas estatisticas ficaram assim: ");

        printf("\n\nVida: %d", personagem.vida);
        printf("\nMana: %d", personagem.mana);
        printf("\nMáximo de itens: %d");
        printf("\nForca: %d",personagem.status_pers.forca);
        printf("\nAgilidade: %d",personagem.status_pers.agilidade);
        printf("\nVigor: %d",personagem.status_pers.vigor);
        printf("\nIntelecto: %d",personagem.status_pers.intelecto);
        printf("\nCarisma: %d",personagem.status_pers.carisma);
        printf("\nSabedoria: %d",personagem.status_pers.sabedoria);

        printf("\n\nDeseja continuar com essa ficha ou deseja redistribuir os stats (Digite 0 para nÃ£o ou 1 para sim):\n ");
        scanf("%d", &loop);
    }while(loop==0);

        printf("\nAqui estÃ¡ a ficha de seu personagem montada:");

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
        return personagem;
}

void MostrarInventario(tpersonagem personagem) {	
    for (int i = 0; i < 20; i++) {
        // Verifica se o nome do item não está vazio, evitando comparação direta com NULL
        if (personagem.inventario[i].nome[0] != '\0') {
            printf("\n%d. %s", i + 1, personagem.inventario[i].nome);
        }
    }  
}

void PegarItem(tpersonagem *personagem, titem item) {
    int opcao;
    
    printf("\nVocê achou um %s, deseja pegá-lo? (digite 1 para sim ou 0 para não): ", item.nome);
    scanf("%d", &opcao);

    if (opcao == 1) {
        // Procura por um espaço vazio no inventário
        for (int i = 0; i < 20; i++) {
            // Verifica se o slot do inventário está vazio
            if (personagem->inventario[i].nome[0] == '\0') {
                personagem->inventario[i] = item;  // Atribui o item ao inventário
                printf("\nVocê pegou o %s", personagem->inventario[i].nome);
                return;
            }
        }
        // Caso o inventário esteja cheio
        printf("\nInventário está cheio. Largue um item para pegar o %s.", item.nome);
    } else {
        printf("\nVocê decidiu não pegar o %s.", item.nome);
    }
}

void UsarItem(tpersonagem *personagem, int item_escolhido) {
    int check;

    // Verifica se o item escolhido é válido (o slot não está vazio)
    if (personagem->inventario[item_escolhido].nome[0] != '\0') {

        switch (personagem->inventario[item_escolhido].tipo) {

            case ARMA:
                personagem->arma = personagem->inventario[item_escolhido]; // Equipando a arma
                printf("Você equipou a %s", personagem->arma.nome);
                // Remove o item do inventário
                personagem->inventario[item_escolhido].nome[0] = '\0';
                break;

            case ARMADURA:
                personagem->armadura = personagem->inventario[item_escolhido]; // Equipando a armadura
                printf("Você equipou a %s", personagem->armadura.nome);
                // Remove o item do inventário
                personagem->inventario[item_escolhido].nome[0] = '\0';
                break;

            case CONSUMIVEL:
                if (personagem->vida < personagem->max_vida) {
                    check = personagem->vida + personagem->inventario[item_escolhido].efeito;

                    // Garantindo que a vida não ultrapasse o máximo
                    if (check > personagem->max_vida) {
                        personagem->vida = personagem->max_vida;
                    } else {
                        personagem->vida = check;
                    }

                    printf("\nVocê usou o %s e recuperou %d de vida", personagem->inventario[item_escolhido].nome, personagem->inventario[item_escolhido].efeito);
                    // Remove o item do inventário
                    personagem->inventario[item_escolhido].nome[0] = '\0';
                } else {
                    printf("\nVocê já está com a vida cheia!");
                }
                break;

            default:
                printf("\nTipo de item inválido!");
                break;
        }

    } else {
        printf("\nItem não existe no inventário.");
    }
}

#include <stdlib.h>
#include <time.h>

// Função para gerar um número aleatório
int random_num(int intervalo) {
	srand(time(NULL));
    return (rand() % intervalo) + 1; // Gera um número aleatório entre 1 e 'intervalo'
}

// Função de ataque
int attack(int dano, int atk, int defesa) {
    int intervalo = 20; // Adicionando ponto e vírgula
    int teste = random_num(intervalo); // Chama a função random_num

    // Lógica de ataque
    if (teste + atk > defesa / 2 || teste < 19) {
        return dano; // Retorna o dano se a condição for verdadeira
    } else if (teste > 18) {
        return dano * 2; // Retorna o dano dobrado se a condição for verdadeira
    } else if (teste + atk < defesa / 2) {
        return 0; // Retorna 0 se a condição for verdadeira
    }

    return 0; // Adiciona um retorno padrão para evitar warnings
}

int fugir(tpersonagem *personagem, tentidade entidade){

    printf("Você %s está tentando fugir do %s", personagem->nome, entidade.nome);

    int teste1 = random_num(20);
    int teste2 = random_num(20);

    if(teste1 + personagem->status_pers.agilidade > teste2 + entidade.stats_ent.agilidade){
    	return 1;
    }else if(teste1 + personagem->status_pers.agilidade < teste2 + entidade.stats_ent.agilidade){
    	return 0;
    }else {
    	fugir(personagem, entidade);
    }
}

void combate(tpersonagem personagem, tentidade entidade) {
    int opcao;
    int loop = 1;
    int dano;
    
    while(loop) {
    	printf("O %s se aproxima de %s\n\n", entidade.nome, personagem.nome);
    	printf("Vida do inimigo: %i\n\n", entidade.vida);
    	printf("Sua vida: %i\n\n", personagem.vida);
    	printf("Menu: \n");
    	printf("\n1 - Ataque\n2 - Inventário\n3 - Fugir\n\nDigite sua escolha: ");
    	scanf("%d", &opcao);
    	switch (opcao) {
        	case 1:
            	// Chama a função de ataque, passando os parâmetros corretos
            	dano = attack(personagem.arma.efeito, personagem.status_pers.forca, entidade.stats_ent.agilidade);
            	entidade.vida -= dano; // Reduz a vida da entidade com o dano causado
            	printf("Você atacou e causou %d de dano. Vida do inimigo agora: %i\n", dano, entidade.vida);
            	break;
        	case 2:
            	break;
        	case 3:
            	if(fugir) {
            		printf("Você consegui fugir do combate");
            		loop = 0;
            		break;
				} else{
					printf("Você não consegui fugir");
					break;
				}
            	break;
        	default:
            	printf("Opção inválida! Por favor, escolha novamente.\n");
            	break; // Para lidar com opções inválidas
    }
	}
}

