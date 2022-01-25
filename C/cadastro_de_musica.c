#include <stdio.h>
#include <string.h>

struct musica
{
	char nome[50];
	char duracao[50];
};

struct album
{
	char nome[50];
	char genero[50];
	struct musica mu[10];
	int quantmusica;
};
int main()
{
	int i, op = 0;
	struct album a;
	int criaalbum = 0;
	while (op != 4)
	{
		printf(" Digite \n 1: para cadastrar um album\n 2: para cadastrar uma musica ao album\n 3: para ver as musicas do album\n 4:para sair\n");
		scanf("%i", &op);
		getchar();
		switch (op)
		{
		case 1:
			a.quantmusica = 0;
			criaalbum = 1;
			printf("Nome\n");
			scanf("%[^\n]s", a.nome);
			getchar();
			printf("Genero\n");
			scanf("%[^\n]s", a.genero);
			getchar();

			break;
		case 2:
			if ((criaalbum == 1) && (a.quantmusica < 10))
			{
				printf("Nome\n");
				scanf("%[^\n]s", a.mu[a.quantmusica].nome);
				getchar();
				printf("duracao\n");
				scanf("%[^\n]s", a.mu[a.quantmusica].duracao);
				getchar();
				a.quantmusica = a.quantmusica + 1;
			}
			else
			{
				printf("Crie um Album primeiro para poder cadastrar a musica\n");
			}
			break;
		case 3:
			if (criaalbum == 1)
			{
				for (i = 0; i < a.quantmusica; i++)
				{
					printf("Musica: %s. Duracao: %s. \n", a.mu[i].nome, a.mu[i].duracao);
				}
			}
			else
			{
				printf("Erro, cadastre o album primeiro\n");
			}

			break;
		case 4:
			printf("Voce saiu \n");

			break;
		}
	}
}
