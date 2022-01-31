#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct _Pilha
{
    char op;
    struct _Pilha *prox;
}Pilha;

void proximaPilha( Pilha **pPos, Pilha **pProx, Pilha *aux )
{
    aux = ( *pProx ) -> prox;
    ( *pProx ) -> prox = *pPos;
    *pPos = *pProx;
    *pProx = aux;
}

void inserePilha( Pilha **pilha, Pilha *aux, char op )
{
    aux = ( Pilha *) malloc( sizeof( Pilha ) );
    aux -> op = op;
    aux -> prox = *pilha;
    *pilha = aux;
}

void identificaOperacao( Pilha **pPos, Pilha **pProx)
{
    char op;
    Pilha *aux;

    scanf( "%c", &op );
    while( op != '\n' )
    {

        switch( op )
        {
            case '+':
            case '-':

                while( ( *pProx) && ( (*pProx) -> op != '(' ) )
                {
                    proximaPilha( &( *pPos ), &( *pProx ), aux );
                }

                inserePilha( &( *pProx), aux, op );

                break;

            case '*':
            case '/':

                while( ( *pProx ) && ( (*pProx) -> op != '+' && (*pProx) -> op != '-'
                        && (*pProx) -> op != '(' ) )
                {
                    proximaPilha( &( *pPos ), &( *pProx ), aux );
                }

                inserePilha( &( *pProx ), aux, op );

                break;

            case ')':
                while( ( *pProx) && ( (*pProx) -> op != '(' ) )
                {
                    proximaPilha( &( *pPos ), &( *pProx), aux );
                }

                if( (*pProx) && (*pProx) -> op == '(' )
                {
                    aux = *pProx;
                    *pProx = (*pProx) -> prox;
                    free( aux );
                }

                break;

            case '(':
                inserePilha( &( *pProx), aux, op );

                break;

            default:
                inserePilha( &( *pPos ), aux, op );

                break;
        }

        scanf( "%c", &op );
    }

    while( *pProx)
    {
        inserePilha( &( *pProx), aux, op );
    }

}

void imprimePilha( Pilha *topo )
{
    if( topo )
    {
        imprimePilha( topo -> prox );
        printf( "%c", topo -> op );
    }
}

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
