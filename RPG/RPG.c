#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

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
	setlocale(LC_ALL, "Portuguese");
	int loop = 1, escolha;
	char nome[100];
	while(loop) {
		clear();
		printtxt("Logo.txt");
		printf("\n");
		printf("1 - jogar\n");
		printf("2 - sair do programa\n");
		printf("\n");
		printf("Digite o número correspondente: ");
		scanf("%i", &escolha);
		switch(escolha) {
			case 1:
				break;
			case 2:
				loop = 0;
				break;
		}
	}
}
