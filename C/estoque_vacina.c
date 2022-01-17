#include <stdio.h>
#include <string.h>
#include <locale.h>
struct cadastro_vacina
{

    char nome[20];
    char laboratorio[20];
    char data_compra[20];
    char data_validade[20];
    int quantidade_vacina;
};
struct cadastro_vacina c[20];
int q_estoque = 0;


cadastro_login()
{
    char Login [30];
    char Senha [30];
    char RegLogin [30];
    char RegSenha [30];
    char Nome [40];
    char Confirma[1];

    printf("\n=================================");
    printf("\n====== REGISTRO DE USUÁRIO ======");
    printf("\n=================================");

    printf("\n\nPrimeiro Nome: ");
    scanf("%s", Nome);

    printf("\n\nLogin: ");
    scanf("%s", RegLogin);

    printf("\n\nSenha: ");
    scanf("%s", RegSenha);

    printf("\n\n====== USUÁRIO CADASTRADO ======");

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
        printf("\n\n====== LOGIN E/OU SENHA INCORRETOS ======\n\n");

        system("pause");
        system("cls");

        printf("\n=================================");
        printf("\n========= TELA DE LOGIN =========");
        printf("\n=================================");

        printf("\n\n======== TENTE NOVAMENTE ========");

        printf("\n\nLogin: ");
        scanf("%s", Login);

        printf("\nSenha: ");
        scanf("%s", Senha);


        system("cls");

        printf("======= Seja Bem-Vindo %s ========\n\n\n", Nome);


        system("cls");



    }
    menu();
}

cadastrar()
{
    printf("\n=========================================");
    printf("\n====Sistema de Cadastro de Vacina=======");
    printf("\n=======================================\n");
    printf("Nome: ");
    scanf("%s",c[q_estoque ].nome);


    printf("Laboratorio:");
    scanf("%s",c[q_estoque ].laboratorio);


    printf("Data da compra: ");
    scanf("%s",c[q_estoque ].data_compra);


    printf("Data validade: ");
    scanf("%s",c[q_estoque ].data_validade);


    printf("Quantidade Vacina:");
    scanf("%d",&c[q_estoque].quantidade_vacina);
    q_estoque++;
}

listar()
{
    int i;
    for (i = 0; i < q_estoque; i++)
    {
        printf("\n");
        printf("---------------------------------------\n");
        printf("Nome:%s\n",c[i].nome);
        printf("Laboratorio:%s\n",c[i].laboratorio);
        printf("data da Compra:%s\n",c[i].data_compra);
        printf("data validade:%s\n",c[i].data_validade);
        printf("quantidade de vacinas:%d\n",c[i].quantidade_vacina);
    }
}

usa_vacina()
{
    char nome_vac[20];
	int i,quant_nova;
				printf("Digite o nome da vacina para Utilizar\n");
				fflush(stdin);
				gets(nome_vac);
				fflush(stdin);
				for(i=0; i<q_estoque ;i++){
					if(strcmp(nome_vac, c[i].nome) == 0){
				printf("Digite a quantide que deseja utilizar\n");
				scanf("%i", &quant_nova);

				if(quant_nova> c[i].quantidade_vacina){
                    printf("Quantidade de retirada maior do que a do estoque tente novamente\n");

				}else{
				c[i].quantidade_vacina -= quant_nova;
				printf("Retirada");

}
		}
}
}
adicionar_vacina()
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

listar_por_nome(){
    char nome_vac[20];
	int i;

				printf("Digite o nome da vacina para buscar\n");
				fflush(stdin);
				gets(nome_vac);
				fflush(stdin);
				for(i=0; i<q_estoque ;i++){
					if(strcmp(nome_vac, c[i].nome) == 0){

				printf("Nome da vacina: %s\n",c[i].nome);
                printf("Laboratorio:%s\n",c[i].laboratorio);
                printf("Data da Compra:%s\n",c[i].data_compra);
                printf("Data validade:%s\n",c[i].data_validade);
                printf("Quantidade de vacinas:%d\n",c[i].quantidade_vacina);

				}else{
				    printf("Nome não encontrado");
				}
		}

}

excluir_dado(){
     char nome_vac[20];
	int i;

				printf("Digite o nome da vacina para buscar\n");
				fflush(stdin);
				gets(nome_vac);
				fflush(stdin);
				for(i=0; i<q_estoque ;i++){
					if(strcmp(nome_vac, c[i].nome) == 0){
                      strcpy(c[i].nome,c[i+1].nome);
                      strcpy(c[i].laboratorio,c[i+1].laboratorio);
                      strcpy(c[i].data_compra,c[i+1].data_compra);
                      strcpy(c[i].data_validade,c[i+1].data_validade);
                      c[i].quantidade_vacina = c[i+1].quantidade_vacina;
				}else{
				    printf("Nome não encontrado");
				}
		}

}

salvar_relatorio(){
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
                fprintf(pont_arq, "Laboratorio:%s\n",c[i].laboratorio);
                fprintf(pont_arq, "Data da compra:%s\n",c[i].data_compra);
                fprintf(pont_arq, "Data da validade:%s\n",c[i].data_validade);
                fprintf(pont_arq, "Quantidade de vacina:%i\n",c[i].quantidade_vacina);
                fprintf(pont_arq, "...............................\n");
				}

  fclose(pont_arq);

  printf("Dados gravados com sucesso!");
  menu();

  getch();
  return(0);
}

int menu()
{
    int op;
    while (op != 0)
    {
         printf("\n=========================================");
        printf("\n====Sistema de Cadastro de Vacina=======");
        printf("\n=======================================\n");
        printf("1- Cadastro!\n");
        printf("2- Lista Estoque de vacina!\n");
        printf("3- Utilizar vacina!\n");
        printf("4- Adiciona vacina!\n");
        printf("5- Excluir dados da vacina!\n");
        printf("6- Pesquisar por nome\n");
        printf("7- Salvar Relatorio\n");
        printf("0- para sair e voltar ao meu de cadastro!\n");
        printf(":");
        scanf("%d",&op);
        system("cls");
        switch (op)
        {
        case 1:
            cadastrar();
            break;
        case 2:
            listar();
            break;
        case 3:
            usa_vacina();
            break;

        case 4:
            adicionar_vacina();
            break;

        case 6:
            listar_por_nome();
            break;

         case 5:
            excluir_dado();
            break;

        case 7:
            salvar_relatorio();
            break;
        }
    }
}



int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int op2;
    while (op2 != 0)
    {
        printf("\n=========================================");
        printf("\n====Castro para acessar o sistema de estoque de vacina =======");
        printf("\n=======================================\n");
        printf("1- Cadastrar no sistema e fazer login!\n");
        scanf("%d",&op2);
        system("cls");
        switch (op2)
        {
        case 1:
            cadastro_login();
            break;
        }
    }
}






