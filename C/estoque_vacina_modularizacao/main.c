#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vacina.h"
int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int op2;
    while (op2 != 0)
    {
        printf("\n===============================================================");
        printf("\n====CADASTRO PARA ACESSAR O SISTEMA DE ESTOQUE DE VACINA=======");
        printf("\n===============================================================\n");
        printf("1- Cadastrar no sistema e fazer login:\n");
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

