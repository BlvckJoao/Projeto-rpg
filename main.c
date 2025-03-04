#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "rpgtools.h"

void clear() {
	
	//Verifica qual � o sistema operacional para utilizar o comando de limpar a tela correto
	#ifdef _WIN32
		system("cls");
	#else
		system("clear");
	#endif
	
}

void printtxt(char nome[]) {
	
	//Abre o arquivo para leitura
	FILE *arquivo = fopen(nome, "r");
	
	//Verifica se o arquivo foi aberto (se n�o, mostra uma mensagem de erro)
	if(arquivo == NULL) {
		printf("Erro ao procurar o arquivo %s\n", nome);
		printf("Verifique se o arquivo est� presente na pasta do jogo.");
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
		printf("[jogar]\n");
		printf("[sair] do programa\n");
		printf("\n");
		printf("Digite a palavra em par�nteses: ");
		scanf("%s", escolha);
		printf("\n");
		if(strcmp(escolha, "jogar") == 0) {
			
			// Menu de cria��o e personagem
			clear();
			personagem = criar_personagem();
			
		} else if(strcmp(escolha, "sair") == 0) {
			
			//Fim do programa
			clear();
			printf("Adeus! Espero te ver novamente :)\n\n");
			system("PAUSE");
			loop = 0;
		}
	}
}
