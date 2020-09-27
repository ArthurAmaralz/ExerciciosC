/*Faça um programa que receba do usuário a quantidade de elementos de uma 
Progressão Geométrica (PG) e a razão, gere uma PG em lista com a quantidade 
de elementos definido pelo usuário e imprima. Uma PG tem como primeiro elemento 
o número 1 e o próximo elemento é o anterior multiplicado da razão.

Exemplo de uma PG com razão 2:
1, 2, 4, 8, 16...*/

#include <stdio.h>
#include <math.h>
 
int main ()
{
    int qtn, raz, i, r, a = 1;
    printf("digite a >QUANTIDADE< de elementos da PG e depois a >RAZAO< entre elas!\n");
    scanf("%d\n",&qtn);
    scanf("%d",&raz);

    for (i = 1; i <= qtn; i++ )
    {
        r = a * pow(raz,i-1);
        printf("%d ",r);
        
    }
return 0;
}