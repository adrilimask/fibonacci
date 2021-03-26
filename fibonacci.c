#include <stdio.h>
/* Fibonacci */
int main()
{
    int quantosnumeros, primeironumero, segundonumero, i, soma;

    printf ("Bem vindo ao gerador de números da sequência de Fibonacci. Quantos números você quer listar? ");
    scanf ("%d",&quantosnumeros);

    primeironumero = 0;
    segundonumero = 1;

    if (quantosnumeros > 0)
    {   for (i = 0; i < quantosnumeros; i++)
        {
        soma = primeironumero + segundonumero;
        printf ("%dº número: %d\n", i+1, primeironumero);
        primeironumero = segundonumero;
        segundonumero = soma;
        }
    }
    else
    {
        printf ("Nenhum número? Tudo bem, não está mais aqui quem falou.");
    }
    printf ("Programa finalizado.\n");

}