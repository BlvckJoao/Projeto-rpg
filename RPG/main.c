#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "rpgtools.h"

int main() {
	
	//Definindo os caracteres para portugu�s
	setlocale(LC_ALL, "Portuguese");
	
	//V�riaveis da l�gica do programa
	int loop = 1;
	char escolha[20];
	
	//V�riavel do personagem
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
		printf("Digite a palavra em par�nteses: ");
		scanf("%s", escolha);
		printf("\n");
		if(strcmp(escolha, "jogar") == 0) {
			
			// Menu de cria��o e personagem
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
		strcpy(comida.nome, "A�ai do Bode");
		comida.tipo = CONSUMIVEL;
		comida.efeito = 2;
		comida.peso = 1;
		
		personagem.inventario[0] = armadura;
			
			clear();
		    printf("As ruas de Eldoria eram conhecidas pela sua vida vibrante,\n");
		    printf("mas � medida que o sol se punha, a cidade mergulhava em\n");
		    printf("sombras profundas. Voc�, um jovem aventureiro, chegou �\n");
		    printf("cidade em busca de respostas sobre o desaparecimento de\n");
		    printf("um velho amigo. Ao caminhar pelas vielas, o eco dos seus\n");
		    printf("passos se mistura com os sussurros de conspira��es que\n");
		    printf("correm soltas por Eldoria.\n\n");
		    
		    system("PAUSE");
		    
		    clear();
		    printf("Suas investiga��es o levaram a uma taverna isolada,\n");
		    printf("\"O Corvo P�lido\". L�, o taverneiro o observava com olhos\n");
		    printf("desconfiados, mas, com alguma persuas�o, voc� conseguiu\n");
		    printf("arrancar uma informa��o vital: o amigo que voc� busca\n");
		    printf("foi visto pela �ltima vez nos arredores da pris�o da\n");
		    printf("cidade, onde algo sombrio parece estar acontecendo.\n\n");
		    
		    system("PAUSE");
		    
		    clear();
		    printf("Decidido, voc� segue em dire��o � pris�o, seus sentidos\n");
		    printf("alertas. Por�m, ao se aproximar dos port�es, uma figura\n");
		    printf("encapuzada intercepta o seu caminho.\n");
		    printf("O guarda da pris�o, com uma express�o sombria e uma m�o\n");
		    printf("firme sobre o cabo de sua espada, bloqueia sua passagem.\n\n");
		    
		    system("PAUSE");
		    
		    clear();
		    printf("\"Parece que temos um curioso por aqui,\" ele rosna.\n");
		    printf("\"Volte agora, ou n�o terei escolha a n�o ser for��-lo.\"\n\n");
		    
		    system("PAUSE");
		    
		    clear();
		    printf("Seu cora��o acelera. A noite silenciosa � interrompida\n");
		    printf("pelo som met�lico de uma espada sendo desembainhada.\n");
		    printf("N�o h� mais como recuar. Voc� puxa sua arma, pronto para\n");
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
