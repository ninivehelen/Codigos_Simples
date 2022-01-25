#include "vacina.h"
#include <stdio.h>
#include <string.h>
#include <locale.h>
struct cadastro_vacina
{
    char nome[20];
    char laboratorio[20];
    char data_compra[20];
    char data_validade[20];
    int quantidade_vacina, cod_vacina;
};
struct cadastro_vacina c[20];
int q_estoque = 0;


void cadastro_login()
{
    char Login [30];
    char Senha [30];
    char RegLogin [30];
    char RegSenha [30];
    char Nome [40];
    char Confirma[1];

    printf("\n===================================");
    printf("\n====== CADASTRADO DE USU�RIO ======");
    printf("\n===================================");

    printf("\n\nPrimeiro Nome: ");
    scanf("%s", Nome);

    printf("\n\nLogin: ");
    scanf("%s", RegLogin);

    printf("\n\nSenha: ");
    scanf("%s", RegSenha);

    printf("\n\n====== USU�RIO CADASTRADO ======");

    printf("\n\nAPERTE '1' para fazer o Login : ");
    scanf("%s", Confirma);

    system("cls");

    printf("\n=================================");
    printf("\n========= TELA DE LOGIN =========");
    printf("\n=================================");

    printf("\n\n=================================");
    printf("\n=== PREENCHA TODOS OS CAMPOS ====");
    printf("\n=================================");

    printf("\n\nLogin: ");
    scanf("%s", Login);

    printf("\nSenha: ");
    scanf("%s", Senha);

    while((strcmp (Login, RegLogin) != 0) || (strcmp(Senha,RegSenha) != 0))
    {
        printf("\n\n\n====== LOGIN E/OU SENHA INCORRETOS ======\n\n");

        system("pause");
        system("cls");

        printf("\n=================================");
        printf("\n========= TELA DE LOGIN =========");
        printf("\n=================================");

        printf("\n\n======= TENTE NOVAMENTE =======");

        printf("\n\nLogin: ");
        scanf("%s", Login);

        printf("\nSenha: ");
        scanf("%s", Senha);

        system("cls");




        system("cls");



    }
    system("cls");
    printf("\n\n===== LOGIN EFETUADO COM SUCESSO =======\n");
    printf("\n======= SEJA BEM-VINDO(A): %s ======\n", Nome);
    menu();
}

void cadastrar_vacina()
{
    int i, cod_vacina;
    printf("\n=========================================");
    printf("\n====SISTEMA DE CADASTRO DE VACINA=======");
    printf("\n=======================================\n");

    printf("Nome da vacina: ");
    scanf("%s",c[q_estoque].nome);

    printf("Laboratorio da vacina:");
    scanf("%s",c[q_estoque].laboratorio);


    printf("Data da compra da vacina: ");
    scanf("%s",c[q_estoque].data_compra);


    printf("Data da validade da vacina: ");
    scanf("%s",c[q_estoque].data_validade);


    printf("Quantidade de vacina:");
    scanf("%d",&c[q_estoque].quantidade_vacina);
    q_estoque++;
}


void listar_todas_vacinas()
{
    int i;
    for (i = 0; i < q_estoque; i++)
    {
        printf("\n");
        printf("---------------------------------------\n");
        printf("Nome da vacina:%s\n",c[i].nome);
        printf("Laboratorio da vacina:%s\n",c[i].laboratorio);
        printf("data da Compra da vacina:%s\n",c[i].data_compra);
        printf("data de validade da vacina:%s\n",c[i].data_validade);
        printf("quantidade de vacinas:%d\n",c[i].quantidade_vacina);
    }
}

void usa_vacina()
{
    char nome_vac[20];
	int i,quant_nova;
				printf("Digite o nome da vacina para utilizar\n");
				fflush(stdin);
				gets(nome_vac);
				fflush(stdin);
				for(i=0; i<q_estoque ;i++){
					if(strcmp(nome_vac, c[i].nome) == 0){
				printf("Digite a quantide de vacina que deseja utilizar\n");
				scanf("%i", &quant_nova);

				if(quant_nova> c[i].quantidade_vacina){
                    printf("Quantidade de retirada maior do que a do estoque tente novamente\n");

				}else{
				c[i].quantidade_vacina -= quant_nova;
				printf("Retirada");

}
		}else{
		    printf("Nome n�o encontrado");
		}
}
}
void adicionar_vacina()
{
    char nome_vac[20];
	int i,quant_nova;
				printf("Digite o nome da vacina para adicionar quantidade\n");
				fflush(stdin);
				gets(nome_vac);
				fflush(stdin);
				for(i=0; i<q_estoque ;i++){
					if(strcmp(nome_vac, c[i].nome) == 0){
				printf("Digite a quantide que deseja adicionar\n");
				scanf("%i", &quant_nova);
				c[i].quantidade_vacina += quant_nova;
				printf("Vacina Adicionada");
                }else{
                    printf("Nome nao encontrado\n");
					}
}
		}

void listar_por_nome(){
    char nome_vac[20];
	int i;

				printf("Digite o nome da vacina para buscar\n");
				fflush(stdin);
				gets(nome_vac);
				fflush(stdin);
				for(i=0; i<q_estoque ;i++){
					if(strcmp(nome_vac, c[i].nome) == 0){

				printf("Nome da vacina: %s\n",c[i].nome);
                printf("Laboratorio da vacina:%s\n",c[i].laboratorio);
                printf("Data da Compra da vacina :%s\n",c[i].data_compra);
                printf("Data da validade da vacina:%s\n",c[i].data_validade);
                printf("Quantidade de vacinas:%d\n",c[i].quantidade_vacina);

				}else{
				    printf("Nome n�o encontrado");
				}
		}

}


void listar_por_data_compra(){
    char data_vac_compra[20];
	int i;

				printf("Digite a data da compra da vacina para buscar\n");
				fflush(stdin);
				gets(data_vac_compra);
				fflush(stdin);
				for(i=0; i<q_estoque ;i++){
					if(strcmp(data_vac_compra,c[i].data_compra) == 0){

				printf("Nome da vacina: %s\n",c[i].nome);
                printf("Laboratorio da vacina:%s\n",c[i].laboratorio);
                printf("Data da Compra da vacina :%s\n",c[i].data_compra);
                printf("Data da validade da vacina:%s\n",c[i].data_validade);
                printf("Quantidade de vacinas:%d\n",c[i].quantidade_vacina);

				}else{
				    printf("Data da compra n�o encontrada");
				}
		}

}

void listar_por_data_validade(){
    char data_vac_validade[20];
	int i;

				printf("Digite a data validade da vacina para buscar\n");
				fflush(stdin);
				gets(data_vac_validade);
				fflush(stdin);
				for(i=0; i<q_estoque ;i++){
					if(strcmp(data_vac_validade,c[i].data_validade) == 0){
				printf("Nome da vacina: %s\n",c[i].nome);
                printf("Laboratorio da vacina:%s\n",c[i].laboratorio);
                printf("Data da Compra da vacina :%s\n",c[i].data_compra);
                printf("Data da validade da vacina:%s\n",c[i].data_validade);
                printf("Quantidade de vacinas:%d\n",c[i].quantidade_vacina);

				}else{
				    printf("Data da validade n�o encontrada");
				}
		}

}

void listar_por_laboratorio(){
    char laboratorio_vac[20];
	int i;

				printf("Digite o laboratorio da vacina para buscar\n");
				fflush(stdin);
				gets(laboratorio_vac);
				fflush(stdin);
				for(i=0; i<q_estoque ;i++){
					if(strcmp(laboratorio_vac,c[i].laboratorio) == 0){
				printf("Nome da vacina: %s\n",c[i].nome);
                printf("Laboratorio da vacina:%s\n",c[i].laboratorio);
                printf("Data da Compra da vacina :%s\n",c[i].data_compra);
                printf("Data da validade da vacina:%s\n",c[i].data_validade);
                printf("Quantidade de vacinas:%d\n",c[i].quantidade_vacina);

				}else{
				    printf("Laboratorio n�o encontrado");
				}
		}

}

void editar_vacina(){
    char nome_vac[20];
	int i,op2;

				printf("Digite o nome da vacina para Editar\n");
				fflush(stdin);
				gets(nome_vac);
				fflush(stdin);
				for(i=0; i<q_estoque ;i++){
					if(strcmp(nome_vac, c[i].nome) == 0){
                printf("Nome da vacina: %s\n",c[i].nome);
                printf("Laboratorio da vacina:%s\n",c[i].laboratorio);
                printf("Data da Compra da vacina :%s\n",c[i].data_compra);
                printf("Data da validade da vacina:%s\n",c[i].data_validade);
                printf("Quantidade de vacinas:%d\n\n",c[i].quantidade_vacina);
                    printf("Digite a op��o que deseja alterar\n");
              printf("\n=========================================\n");
              printf("1- Para alterar o Nome\n");
              printf("2- Para alterar o Laboratorio\n");
              printf("3- Para alterar a data da compra \n");
              printf("4- Para alterar a data da validade\n");
              printf("5- Para alterar a quantidade de vacina\n");
              printf(":");
              printf("\n=========================================");
              scanf("%d",&op2);
              system("cls");

              switch (op2) {
                case 1:
                  printf("Nome:");
                  scanf("%s",c[i].nome);
                  printf("Alterado com sucesso");

                break;
                case 2:
                  printf("Laboratorio:");
                  scanf("%s",c[i].laboratorio);
                  printf("Alterado com sucesso");

                break;
                case 3:
                  printf("Data Compra:");
                  scanf("%s",c[i].data_compra);
                  printf("Alterado com sucesso");

                break;

                case 4:
                  printf("Data validade:");
                  scanf("%s",c[i].data_validade);
                  printf("Alterado com sucesso");

                break;

                case 5:
                  printf("Quantidade de vacina:");
                  scanf("%d",&c[i].quantidade_vacina);
                  printf("Alterado com sucesso");

                break;

            }
                            }else{
                              printf("Nome n�o encontrado");
                            }
            }
            }

void excluir_vacina(){
     char nome_vac[20];
	int i;
				printf("Digite o nome da vacina para excluir\n");
				fflush(stdin);
				gets(nome_vac);
				fflush(stdin);
				for(i=0; i<q_estoque ;i++){
					if(strcmp(nome_vac, c[i].nome) == 0){
                      printf("Dados da vacina exclu�dos com sucesso");
                      strcpy(c[i].nome,"Dado exclu�do");
                      strcpy(c[i].laboratorio,"Dado exclu�do");
                      strcpy(c[i].data_compra,"Dado exclu�do");
                      strcpy(c[i].data_validade,"Dado exclu�do");
                      c[i].quantidade_vacina = c[i+1].quantidade_vacina;
}
				}
}
void salvar_relatorio(){
    int i;
  FILE *pont_arq;

  pont_arq = fopen("Relatorio_Vacina.txt", "w");

  if(pont_arq == NULL)
  {
  printf("Erro na abertura do arquivo!");
  return 1;
  }

  for(i=0; i<q_estoque ;i++){
				fprintf(pont_arq, "Nome da vacina: %s\n",c[i].nome);
                fprintf(pont_arq, "Laboratorio da vacina:%s\n",c[i].laboratorio);
                fprintf(pont_arq, "Data da compra da vacina:%s\n",c[i].data_compra);
                fprintf(pont_arq, "Data da validade da vaicna :%s\n",c[i].data_validade);
                fprintf(pont_arq, "Quantidade de vacina:%i\n",c[i].quantidade_vacina);
                fprintf(pont_arq, "...............................\n");
				}

  fclose(pont_arq);

  printf("Dados gravados com sucesso!");
  menu();

  getch();
  return(0);
}

void menu()
{
    int op;
    while (op != 0)
    {
         printf("\n=========================================");
        printf("\n====SISTEMA DE CADASTRO DE VACINA=======");
        printf("\n=======================================\n");
        printf("1- Cadastrar vacina:\n");
        printf("2- Lista Estoque de vacina:\n");
        printf("3- Utilizar vacina:\n");
        printf("4- Adiciona vacina:\n");
        printf("5- Pesquisar vacina por nome:\n");
        printf("6- Pesquisar vacina por laboratorio:\n");
        printf("7- Pesquisar vacina por data da compra:\n");
        printf("8- Pesquisar vacina por data da validade:\n");
        printf("9- Editar Vacina:\n");
        printf("10-Exluir Vacina:\n");
        printf("11-Salvar Relatorio das vacinas:\n");
        printf("0- Para sair e voltar ao menu de cadastro de login:\n");
        printf(":");
        scanf("%d",&op);
        system("cls");
        switch (op)
        {
        case 1:
            cadastrar_vacina();
            break;
        case 2:
           listar_todas_vacinas();
            break;
        case 3:
            usa_vacina();
            break;

        case 4:
            adicionar_vacina();
            break;

        case 5:
            listar_por_nome();
            break;

        case 6:
            listar_por_laboratorio();
            break;

        case 7:
            listar_por_data_compra();
            break;

        case 8:
            listar_por_data_validade();
            break;

        case 9:
            editar_vacina();
            break;

         case 10:
            excluir_vacina();
            break;

        case 11:
            salvar_relatorio();
            break;

        }
    }
}
