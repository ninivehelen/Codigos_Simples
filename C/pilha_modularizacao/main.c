#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "pilha.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");
    Pilha *pPos = NULL;
    Pilha *pProx= NULL;
    int op;
    printf("---------------------------\n");
    printf("Aplicação: Notação Polonesa\n");
    printf("---------------------------\n");
    while(op != '0')
    {
        printf("\n1 -Para aplicação polonesa\n");
        printf("0 -Sair\n\n");
        scanf(" %c", &op);
        switch(op)
        {
        case '1':
            identificaOperacao( &pPos, &pProx);
             printf( "Operacao Infixa: " );
            identificaOperacao( &pPos, &pProx);
            printf( "Operacao Posfixa: " );
            imprimePilha( pPos );
            printf("\n");
            break;
    return 0;
}
    }
}
