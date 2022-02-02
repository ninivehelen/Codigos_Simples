#include "pilha.h"

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
