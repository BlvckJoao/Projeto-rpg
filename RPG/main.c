#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "rpgtools.h"

void clear() {
	
	//Verifica qual é o sistema operacional para utilizar o comando de limpar a tela correto
	#ifdef _WIN32
		system("cls");
	#else
		system("clear");
	#endif
	
}

void printtxt(char nome[]) {
	
	//Abre o arquivo para leitura
	FILE *arquivo = fopen(nome, "r");
	
	//Verifica se o arquivo foi aberto (se não, mostra uma mensagem de erro)
	if(arquivo == NULL) {
		printf("Erro ao procurar o arquivo %s\n", nome);
		printf("Verifique se o arquivo está presente na pasta do jogo.");
		exit(EXIT_FAILURE);
	}
	
	//Imprime todas as linhas presentes no arquivo e pula uma linha
	char linha[256];
	while(fgets(linha, sizeof(linha), arquivo) != NULL) {
		printf("%s", linha);
	}
	printf("\n");
	
	//Fecha o arquivo
	fclose(arquivo);
	
}

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
		printf("[jogar]\n");
		printf("[sair] do programa\n");
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
			
			printf("combate teste (o mesmo inicial da carroça)");
			system("PAUSE");
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
