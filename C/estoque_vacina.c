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
    int quant_vacina;
    printf("Insira a quantidade de vacinas que deseja utilizar");
    scanf("%i", &quant_vacina);
    c[q_estoque].quantidade_vacina -= quant_vacina;

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

				}
		}

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
        printf("3- Vacina utilizada!\n");
        printf("4- Editar cadastro!\n");
        printf("5- Excluir dado de um cadastro!\n");
        printf("6- Pesquisar por nome\n");
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

        case 6:
            listar_por_nome();
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






