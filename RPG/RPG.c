#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

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
	
	//Váriaveis do personagem
	tpersonagem personagem;
    int max_pontos_stats;
	
	//Tela principal
	while(loop) {
		clear();
		printtxt("Logo.txt");
		printf("\n");
		printf("Bem-vindo ao nosso RPG de texto! O que deseja fazer?\n");
		printf("\n");
		printf("(jogar)\n");
		printf("(sair)\n");
		printf("\n");
		printf("Digite a palavra em parênteses: ");
		scanf("%s", escolha);
		printf("\n");
		if(strcmp(escolha, "jogar") == 0) {
			//Continuar aqui
		} else if(strcmp(escolha, "sair") == 0) {
			loop = 0;
		}
	}
}
