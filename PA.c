/*Faça um programa que receba do usuário a quantidade de elementos 
de uma Progressão Aritmética (PA) e a razão, gere uma PA em lista com 
a quantidade de elementos definido pelo usuário e imprima. Uma PA tem 
como primeiro elemento o número 0 e o próximo elemento é o anterior 
somado da razão.
Exemplo de uma PA com razão 3:
0, 3, 6, 9, 12...*/

#include <stdio.h>

int main ()
{
    int qtn, raz, i;
    printf("digite a >QUANTIDADE< de elementos da PA e depois a >RAZAO< entre elas!\n");
    scanf("%d\n",&qtn);
    scanf("%d",&raz);

    for (i = 0; i <= qtn; i++ )
    {
        printf("%d ",raz * i);    
    }
return 0;
}
