#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

typedef struct _Pilha
{
    char op;
    struct _Pilha *prox;
}Pilha;

void proximaPilha( Pilha **pPos, Pilha **pProx, Pilha *aux );
void inserePilha( Pilha **pilha, Pilha *aux, char op );
void identificaOperacao( Pilha **pPos, Pilha **pProx);
void imprimePilha( Pilha *topo );


#endif // PILHA_H_INCLUDED
