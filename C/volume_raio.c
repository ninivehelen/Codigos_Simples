#include <stdio.h>
float volumeraio(float raio)
{
    float resultado, resultado2;
    resultado =(4*3.14)* (raio*raio*raio);
    resultado2 = resultado /3;
    return(resultado2);
}

int main()
{
    float raio, volume;
    printf("Digite o valor do raio ");
    scanf("%f", &raio);
    volume = volumeraio(raio);
    printf("Volume do raio = %f", volume);
}
