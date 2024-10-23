#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "rpgtools.h"

#define MAX 100

// Fun��o para criar o personagem
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
            printf("\nO nome de seu personagem � %s. Deseja prosseguir? (Digite 0 para n�o ou 1 para sim)\n", personagem.nome);
            scanf("%d", &loop);
            printf("\n");
            if (loop == 0) {
                printf("Voc� decidiu reescolher o nome.\n\n");
            }
        } while (loop == 0);
        printf("Voc� decidiu prosseguir com o personagem: %s\n\n", personagem.nome);

        loop = 0; // Reset do loop para ser utilizado de novo

        // Escolha de ra�a
        do {
            printf("Escolha a ra�a do seu personagem? (Escolha a op��o digitando o n�mero correspondente)\n");
            printf("1. HUMANO: Vers�teis e equilibrados, capazes de fazer qualquer coisa com expertise\n");
            printf("2. ELFO: �geis e inteligentes, possuem profici�ncia com magia e conhecimento\n");
            printf("3. AN�O: Seres robustos e resistentes, possuem vigor inesgot�vel\n");
            printf("4. SHEDER: Seres das sombras, mestres da agilidade e precis�o\n");
            printf("5. BERSERKIR: Guerreiros implac�veis, possuem for�a e resist�ncia descomunal\n");
            printf("6. MERMEDE: Mestres da diplomacia, possuem poder na manipula��o e l�bia\n");

            printf("Escolha: ");
            scanf("%d", &esc_raca);
            personagem.raca_pers = esc_raca - 1;

            switch (esc_raca) {
                case 1:
                    printf("\nDeseja que %s seja um humano? (Digite 0 para n�o ou 1 para sim)\n", personagem.nome);
                    break;
                case 2:
                    printf("\nDeseja que %s seja um elfo? (Digite 0 para n�o ou 1 para sim)\n", personagem.nome);
                    break;
                case 3:
                    printf("\nDeseja que %s seja um an�o? (Digite 0 para n�o ou 1 para sim)\n", personagem.nome);
                    break;
                case 4:
                    printf("\nDeseja que %s seja um sheder? (Digite 0 para n�o ou 1 para sim)\n", personagem.nome);
                    break;
                case 5:
                    printf("\nDeseja que %s seja um berserkir? (Digite 0 para n�o ou 1 para sim)\n", personagem.nome);
                    break;
                case 6:
                    printf("\nDeseja que %s seja um mermede? (Digite 0 para n�o ou 1 para sim)\n", personagem.nome);
                    break;
                default:
                    printf("\nEscolha inv�lida");
                    continue;
            }

            if (esc_raca < 1 || esc_raca > 6) {
                printf("\nVoc� tem que escolher um n�mero de 1 a 6\n");
            } else {
                scanf("%d", &loop);
            }
        } while (loop == 0);
        printf("\nRa�a escolhida com sucesso!\n");
        loop = 0;

        // Escolha de classe
        do {
            printf("\nEscolha a classe de seu personagem (Escolha a op��o digitando o n�mero correspondente)");
            printf("\n1. GUERREIRO");
            printf("\n2. LADINO");
            printf("\n3. MAGO");
            printf("\n4. B�RBARO");
            printf("\n5. BARDO");
            printf("\n6. CL�RIGO");
            printf("\n7. ENGENHEIRO");
            printf("\n8. ARQUEIRO");

            printf("\nEscolha: ");
            scanf("%d", &esc_classe);
            personagem.classe_pers = esc_classe - 1;

            switch (esc_classe) {
                case 1:
                    printf("\nDeseja que %s seja um guerreiro? (Digite 0 para n�o ou 1 para sim)\n", personagem.nome);
                    break;
                case 2:
                    printf("\nDeseja que %s seja um ladino? (Digite 0 para n�o ou 1 para sim)\n", personagem.nome);
                    break;
                case 3:
                    printf("\nDeseja que %s seja um mago? (Digite 0 para n�o ou 1 para sim)\n", personagem.nome);
                    break;
                case 4:
                    printf("\nDeseja que %s seja um b�rbaro? (Digite 0 para n�o ou 1 para sim)\n", personagem.nome);
                    break;
                case 5:
                    printf("\nDeseja que %s seja um bardo? (Digite 0 para n�o ou 1 para sim)\n", personagem.nome);
                    break;
                case 6:
                    printf("\nDeseja que %s seja um cl�rigo? (Digite 0 para n�o ou 1 para sim)\n", personagem.nome);
                    break;
                case 7:
                    printf("\nDeseja que %s seja um engenheiro? (Digite 0 para n�o ou 1 para sim)\n", personagem.nome);
                    break;
                case 8:
                    printf("\nDeseja que %s seja um arqueiro? (Digite 0 para n�o ou 1 para sim)\n", personagem.nome);
                    break;
                default:
                    printf("\nEscolha inv�lida");
                    continue;
            }

            if (esc_classe < 1 || esc_classe > 8) {
                printf("\nVoc� tem que escolher um n�mero de 1 a 8\n");
            } else {
                scanf("%d", &loop);
            }
        } while (loop == 0);
        printf("\nClasse escolhida com sucesso!\n\n");
        loop = 0;

    do{

        max_pontos_stats = 72;
        
        personagem.status_pers.forca = 0;
        personagem.status_pers.agilidade = 0;
        personagem.status_pers.vigor = 0;
        personagem.status_pers.intelecto = 0;
        personagem.status_pers.sabedoria = 0;
        personagem.status_pers.carisma = 0;

    printf("Vamos ditribuir alguns stats, cada estatistica vai de 1 at� 20, o m�ximo de pontos a distribuir s�o 72\n\n");
    
    while(loop == 0) {
    	printf("Pontos restantes a distribuir = %d\n", max_pontos_stats );
        printf("Digite a for�a de %s: ", personagem.nome);
        scanf("%d", &personagem.status_pers.forca);
        if(personagem.status_pers.forca >= 1 && personagem.status_pers.forca <= 20) {
        	if(personagem.status_pers.forca <= max_pontos_stats) {
        		loop = 1;
        		max_pontos_stats = max_pontos_stats - personagem.status_pers.forca;
			} else {
				printf("\nVoc� n�o tem os pontos suficientes. Tente outra vez.\n");
			}
		} else {
			printf("\nValor inv�lido. Escolha um valor entre 1 e 20.\n");
		}
		printf("\n");
	}
	loop = 0;

        if(max_pontos_stats > 0){

        while(loop == 0) {
    	printf("Pontos restantes a distribuir = %d\n", max_pontos_stats );
        printf("Digite a agilidade de %s: ", personagem.nome);
        scanf("%d", &personagem.status_pers.agilidade);
        if(personagem.status_pers.agilidade >= 1 && personagem.status_pers.agilidade <= 20) {
        	if(personagem.status_pers.agilidade <= max_pontos_stats) {
        		loop = 1;
        		max_pontos_stats = max_pontos_stats - personagem.status_pers.agilidade;
			} else {
				printf("\nVoc� n�o tem os pontos suficientes. Tente outra vez.\n");
			}
		} else {
			printf("\nValor inv�lido. Escolha um valor entre 1 e 20.\n");
		}
		printf("\n");
	}
	loop = 0;	

        }else{ 
          printf("N�mero m�ximo distribuido");
          break;
        }

        if(max_pontos_stats > 0){

        while(loop == 0) {
    	printf("Pontos restantes a distribuir = %d\n", max_pontos_stats );
        printf("Digite a vigor de %s: ", personagem.nome);
        scanf("%d", &personagem.status_pers.vigor);
        if(personagem.status_pers.vigor >= 1 && personagem.status_pers.vigor <= 20) {
        	if(personagem.status_pers.vigor <= max_pontos_stats) {
        		loop = 1;
        		max_pontos_stats = max_pontos_stats - personagem.status_pers.vigor;
			} else {
				printf("\nVoc� n�o tem os pontos suficientes. Tente outra vez.\n");
			}
		} else {
			printf("\nValor inv�lido. Escolha um valor entre 1 e 20.\n");
		}
		printf("\n");
	}
	loop = 0;	

        }else{ 
          printf("N�mero m�ximo distribuido");
          break;
        }

        if(max_pontos_stats > 0){

        while(loop == 0) {
    	printf("Pontos restantes a distribuir = %d\n", max_pontos_stats );
        printf("Digite o intelecto de %s: ", personagem.nome);
        scanf("%d", &personagem.status_pers.intelecto);
        if(personagem.status_pers.intelecto >= 1 && personagem.status_pers.intelecto <= 20) {
        	if(personagem.status_pers.intelecto <= max_pontos_stats) {
        		loop = 1;
        		max_pontos_stats = max_pontos_stats - personagem.status_pers.intelecto;
			} else {
				printf("\nVoc� n�o tem os pontos suficientes. Tente outra vez.\n");
			}
		} else {
			printf("\nValor inv�lido. Escolha um valor entre 1 e 20.\n");
		}
		printf("\n");
	}
	loop = 0;	

        }else{ 
          printf("N�mero m�ximo distribuido");
          break;
        }

        if(max_pontos_stats > 0){

        while(loop == 0) {
    	printf("Pontos restantes a distribuir = %d\n", max_pontos_stats );
        printf("Digite o sabedoria de %s: ", personagem.nome);
        scanf("%d", &personagem.status_pers.sabedoria);
        if(personagem.status_pers.sabedoria >= 1 && personagem.status_pers.sabedoria <= 20) {
        	if(personagem.status_pers.sabedoria <= max_pontos_stats) {
        		loop = 1;
        		max_pontos_stats = max_pontos_stats - personagem.status_pers.sabedoria;
			} else {
				printf("\nVoc� n�o tem os pontos suficientes. Tente outra vez.\n");
			}
		} else {
			printf("\nValor inv�lido. Escolha um valor entre 1 e 20.\n");
		}
		printf("\n");
	}
	loop = 0;	

        }else{ 
          printf("N�mero m�ximo distribuido");
          break;
        }

        if(max_pontos_stats > 0){

        while(loop == 0) {
    	printf("Pontos restantes a distribuir = %d\n", max_pontos_stats );
        printf("Digite o intelecto de %s: ", personagem.nome);
        scanf("%d", &personagem.status_pers.carisma);
        if(personagem.status_pers.carisma >= 1 && personagem.status_pers.carisma <= 20) {
        	if(personagem.status_pers.carisma <= max_pontos_stats) {
        		loop = 1;
        		max_pontos_stats = max_pontos_stats - personagem.status_pers.carisma;
			} else {
				printf("\nVoc� n�o tem os pontos suficientes. Tente outra vez.\n");
			}
		} else {
			printf("\nValor inv�lido. Escolha um valor entre 1 e 20.\n");
		}
		printf("\n");
	}
	loop = 0;	

        }else{ 
          printf("N�mero m�ximo distribuido");
          break;
        }

        personagem.max_vida = 16 + (personagem.status_pers.vigor / 4);
        personagem.max_mana = 4 + (personagem.status_pers.carisma / 4);
        personagem.max_inventario = 5 + (personagem.status_pers.forca / 4) * 5;
        
        personagem.vida = personagem.max_vida;
        personagem.mana = personagem.max_mana;

        printf("\nSuas estatisticas ficaram assim: ");

        printf("\n\nVida: %d", personagem.vida);
        printf("\nMana: %d", personagem.mana);
        printf("\nM�ximo de itens: %d", personagem.max_inventario);
        printf("\nForca: %d",personagem.status_pers.forca);
        printf("\nAgilidade: %d",personagem.status_pers.agilidade);
        printf("\nVigor: %d",personagem.status_pers.vigor);
        printf("\nIntelecto: %d",personagem.status_pers.intelecto);
        printf("\nCarisma: %d",personagem.status_pers.carisma);
        printf("\nSabedoria: %d",personagem.status_pers.sabedoria);

        printf("\n\nDeseja continuar com essa ficha ou deseja redistribuir os stats (Digite 0 para não ou 1 para sim):\n");
        scanf("%d", &loop);
        printf("\n");
    }while(loop==0);

        printf("Aqui est� a ficha de seu personagem montada:\n\n");

        printf("Nome: %s\n", personagem.nome);
        switch(personagem.raca_pers){

        case 0:
            printf("Raca: Humano\n");
            break;

        case 1:
            printf("Raca: Elfo\n");
            break;

        case 2:
            printf("Raca: An�o\n");
            break;

        case 3:
            printf("Raca: Sheder\n");
            break;

        case 4:
            printf("Raca: Berserkir\n");
            break;

        case 5:
            printf("Raca: Mermede\n");
            break;
        }


         switch(personagem.classe_pers){
        case 0:
            printf("Classe: Guerreiro\n");
            break;

        case 1:
            printf("Classe: Ladino\n");
            break;

        case 2:
            printf("Raca: Mago\n");
            break;

        case 3:
            printf("Raca: Barbaro\n");
            break;

            break;

        case 6:
            printf("Raca: Engenheiro\n");
            break;

        case 7:
            printf("Raca: Arqueiro\n");
            break;
        }
        printf("\nVida: %d\n", personagem.vida);
        printf("Mana: %d\n", personagem.mana);
        printf("Forca: %d\n",personagem.status_pers.forca);
        printf("Agilidade: %d\n",personagem.status_pers.agilidade);
        printf("Vigor: %d\n",personagem.status_pers.vigor);
        printf("Intelecto: %d\n",personagem.status_pers.intelecto);
        printf("Carisma: %d\n",personagem.status_pers.carisma);
        printf("Sabedoria: %d\n\n",personagem.status_pers.sabedoria);


        printf("Deseja seguir com %s? (Digite 0 para recriar o personagem ou 1 para continuar): ", personagem.nome);
        scanf("%d", &criacao);

 }while(criacao == 0);

        printf("Personagem criado com sucesso!!!\n");
        system("PAUSE");
        return personagem;
}

void MostrarInventario(tpersonagem personagem) {	
    for (int i = 0; i < 20; i++) {
        // Verifica se o nome do item n�o est� vazio, evitando compara��o direta com NULL
        if (personagem.inventario[i].nome[0] != '\0') {
            printf("\n%d. %s", i + 1, personagem.inventario[i].nome);
        }
    }  
}

void PegarItem(tpersonagem *personagem, titem item) {
    int opcao;
    
    printf("\nVoc� achou um %s, deseja peg�-lo? (digite 1 para sim ou 0 para n�o): ", item.nome);
    scanf("%d", &opcao);

    if (opcao == 1) {
        // Procura por um espa�o vazio no invent�rio
        for (int i = 0; i < 20; i++) {
            // Verifica se o slot do invent�rio est� vazio
            if (personagem->inventario[i].nome[0] == '\0') {
                personagem->inventario[i] = item;  // Atribui o item ao invent�rio
                printf("\nVoc� pegou o %s", personagem->inventario[i].nome);
                return;
            }
        }
        // Caso o invent�rio esteja cheio
        printf("\nInvent�rio est� cheio. Largue um item para pegar o %s.", item.nome);
    } else {
        printf("\nVoc� decidiu n�o pegar o %s.", item.nome);
    }
}

void UsarItem(tpersonagem *personagem, int item_escolhido) {
    int check;

    // Verifica se o item escolhido � v�lido (o slot n�o est� vazio)
    if (personagem->inventario[item_escolhido].nome[0] != '\0') {

        switch (personagem->inventario[item_escolhido].tipo) {

            case ARMA:
                personagem->arma = personagem->inventario[item_escolhido]; // Equipando a arma
                printf("Voc� equipou a %s", personagem->arma.nome);
                // Remove o item do invent�rio
                personagem->inventario[item_escolhido].nome[0] = '\0';
                break;

            case ARMADURA:
                personagem->armadura = personagem->inventario[item_escolhido]; // Equipando a armadura
                printf("Voc� equipou a %s", personagem->armadura.nome);
                // Remove o item do invent�rio
                personagem->inventario[item_escolhido].nome[0] = '\0';
                break;

            case CONSUMIVEL:
                if (personagem->vida < personagem->max_vida) {
                    check = personagem->vida + personagem->inventario[item_escolhido].efeito;

                    // Garantindo que a vida n�o ultrapasse o m�ximo
                    if (check > personagem->max_vida) {
                        personagem->vida = personagem->max_vida;
                    } else {
                        personagem->vida = check;
                    }

                    printf("\nVoc� usou o %s e recuperou %d de vida", personagem->inventario[item_escolhido].nome, personagem->inventario[item_escolhido].efeito);
                    // Remove o item do invent�rio
                    personagem->inventario[item_escolhido].nome[0] = '\0';
                } else {
                    printf("\nVoc� j� est� com a vida cheia!");
                }
                break;

            default:
                printf("\nTipo de item inv�lido!");
                break;
        }

    } else {
        printf("\nItem n�o existe no invent�rio.");
    }
}

#include <stdlib.h>
#include <time.h>

// Fun��o para gerar um n�mero aleat�rio
int random_num(int intervalo) {
	srand(time(NULL));
    return (rand() % intervalo) + 1; // Gera um n�mero aleat�rio entre 1 e 'intervalo'
}

// Fun��o de ataque
int attack(int dano, int atk, int defesa) {
    int intervalo = 20; // Adicionando ponto e v�rgula
    int teste = random_num(intervalo); // Chama a fun��o random_num

    // L�gica de ataque
    if (teste + atk > defesa / 2 || teste < 19) {
    	printf("\nVoce atacou o inimigo e causou %d de dano", dano);
        return dano; // Retorna o dano se a condi��o for verdadeira
    } else if (teste > 18) {
    	printf("\nAtaque cr�tico, voce acertou o inimigo em ponto vital e causou %d de dano", dano*2);
        return dano * 2; // Retorna o dano dobrado se a condi��o for verdadeira
    } else if (teste + atk < defesa / 2) {
    	printf("\nVoce tentou atacar mas errou miseravelmente, nao causou dano");
        return 0; // Retorna 0 se a condi��o for verdadeira
    }

    return 0; // Adiciona um retorno padr�o para evitar warnings
}

int attackInimigo(int dano, int atk, int defesa) {
    int intervalo = 20; // Adicionando ponto e v�rgula
    int teste = random_num(intervalo); // Chama a fun��o random_num

    // L�gica de ataque
    if (teste + atk > defesa / 2 || teste < 19) {
    	printf("\n O inimigo te atacou causou %d de dano", dano);
        return dano; // Retorna o dano se a condi��o for verdadeira
    } else if (teste > 18) {
    	printf("\nAtaque cr�tico, o inimigo te atacou em ponto vital e causou %d de dano", dano*2);
        return dano * 2; // Retorna o dano dobrado se a condi��o for verdadeira
    } else if (teste + atk < defesa / 2) {
    	printf("\nVoce tentou atacar mas errou miseravelmente, nao causou dano");
        return 0; // Retorna 0 se a condi��o for verdadeira
    }

    return 0; // Adiciona um retorno padr�o para evitar warnings
}

int fugir(tpersonagem *personagem, tentidade entidade){

    printf("Voc� %s est� tentando fugir do %s", personagem->nome, entidade.nome);

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
    int dano;
    int fuga = 0;
    tpersonagem *ptr_pers;
    ptr_pers = &personagem;
    
    do{
    	printf("O %s se aproxima de %s\n\n", entidade.nome, personagem.nome);
    	printf("Vida do inimigo: %i\n\n", entidade.vida);
    	printf("Sua vida: %i\n\n", personagem.vida);
    	printf("Menu: \n");
    	printf("\n1 - Ataque\n2 - Invent�rio\n3 - Fugir\n\nDigite sua escolha: ");
    	scanf("%d", &opcao);
    	switch (opcao) {
        	case 1:
            	// Chama a fun��o de ataque, passando os par�metros corretos
            	dano = attack(personagem.arma.efeito, personagem.status_pers.forca, entidade.stats_ent.agilidade);
            	entidade.vida -= dano; // Reduz a vida da entidade com o dano causado
            	break;
        	case 2:
        		MostrarInventario(personagem);
            	break;
        	case 3:
        		fuga = fugir(ptr_pers, entidade);
        		
            	if(fuga == 0){
            		printf("Voc� nao conseguiu fugir e perde a rodada");
				}
        	default:
            	printf("\nOp��o inv�lida! Voce entra e choque e n�o faz nada nessa rodada");
            	break; // Para lidar com op��es inv�lidas
    }
    
    printf("\nVez do inimigo ele te ataca");
    
	}while(personagem.vida > 0 || entidade.vida > 0 || fuga != 1);
	
	if(entidade.vida <= 0){
		printf("\nO %s morreu agora voce esta livre", entidade.nome);
		return;
	}else if(personagem.vida <= 0){
		printf("\nVoc� morreu");
		return;
	}else{
		printf("Voc� corre muito e conseguiu fugir do %s, est� livre", entidade.nome);
		return;
	}
}

