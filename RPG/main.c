#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "rpgtools.h"

int main() {
	
	//Definindo os caracteres para português
	setlocale(LC_ALL, "Portuguese");
	
	//Váriaveis da lógica do programa
	int loop = 1;
	char escolha[20];
	
	//Váriavel do personagem
	tpersonagem personagem;
	
	//Tela principal
	while(loop) {
		clear();
		printtxt("Logo.txt");
		printf("\n");
		printf("Bem-vindo ao nosso RPG de texto! O que deseja fazer?\n");
		printf("\n");
		printf("(jogar)\n");
		printf("(sair) do programa\n");
		printf("\n");
		printf("Digite a palavra em parênteses: ");
		scanf("%s", escolha);
		printf("\n");
		if(strcmp(escolha, "jogar") == 0) {
			
			// Menu de criação e personagem
			clear();
			personagem = criar_personagem();
			
			titem espada;
			
			strcpy(espada.nome, "Espada velha");
			espada.efeito = 4;
			espada.tipo = ARMA;
			espada.peso = 1;
			
			personagem.arma = espada;
			
			titem armadura;
			
		strcpy(armadura.nome, "Armadura quebrada");
		armadura.tipo = ARMADURA;
		armadura.efeito = 2;
		armadura.peso = 10;
		
		personagem.armadura = armadura;
		
		titem comida;
		strcpy(comida.nome, "Açai do Bode");
		comida.tipo = CONSUMIVEL;
		comida.efeito = 2;
		comida.peso = 1;
		
		personagem.inventario[0] = armadura;
			
			clear();
		    printf("As ruas de Eldoria eram conhecidas pela sua vida vibrante,\n");
		    printf("mas à medida que o sol se punha, a cidade mergulhava em\n");
		    printf("sombras profundas. Você, um jovem aventureiro, chegou à\n");
		    printf("cidade em busca de respostas sobre o desaparecimento de\n");
		    printf("um velho amigo. Ao caminhar pelas vielas, o eco dos seus\n");
		    printf("passos se mistura com os sussurros de conspirações que\n");
		    printf("correm soltas por Eldoria.\n\n");
		    
		    system("PAUSE");
		    
		    clear();
		    printf("Suas investigações o levaram a uma taverna isolada,\n");
		    printf("\"O Corvo Pálido\". Lá, o taverneiro o observava com olhos\n");
		    printf("desconfiados, mas, com alguma persuasão, você conseguiu\n");
		    printf("arrancar uma informação vital: o amigo que você busca\n");
		    printf("foi visto pela última vez nos arredores da prisão da\n");
		    printf("cidade, onde algo sombrio parece estar acontecendo.\n\n");
		    
		    system("PAUSE");
		    
		    clear();
		    printf("Decidido, você segue em direção à prisão, seus sentidos\n");
		    printf("alertas. Porém, ao se aproximar dos portões, uma figura\n");
		    printf("encapuzada intercepta o seu caminho.\n");
		    printf("O guarda da prisão, com uma expressão sombria e uma mão\n");
		    printf("firme sobre o cabo de sua espada, bloqueia sua passagem.\n\n");
		    
		    system("PAUSE");
		    
		    clear();
		    printf("\"Parece que temos um curioso por aqui,\" ele rosna.\n");
		    printf("\"Volte agora, ou não terei escolha a não ser forçá-lo.\"\n\n");
		    
		    system("PAUSE");
		    
		    clear();
		    printf("Seu coração acelera. A noite silenciosa é interrompida\n");
		    printf("pelo som metálico de uma espada sendo desembainhada.\n");
		    printf("Não há mais como recuar. Você puxa sua arma, pronto para\n");
		    printf("a batalha que se aproxima.\n\n");

			system("PAUSE");
			
			tentidade guarda;
			
			strcpy(guarda.nome,"Guarda");
			guarda.stats_ent.forca = 10;
			guarda.stats_ent.agilidade = 10;
			guarda.stats_ent.vigor = 10;
			guarda.stats_ent.carisma = 5;
			guarda.stats_ent.intelecto = 5;
			guarda.stats_ent.sabedoria = 5;
			guarda.bixo_ent = HUMANOIDE;
			guarda.efeito = 3;
			guarda.vida = 15;
			
			combate(personagem, guarda);
		} else if(strcmp(escolha, "sair") == 0) {
			
			//Fim do programa
			clear();
			printf("Adeus! Espero te ver novamente :)\n\n");
			system("PAUSE");
			loop = 0;
		}
	}
}
