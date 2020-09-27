/*Faça um programa que leia um número e retorne o fatorial deste número.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, resul;
    printf("Digite o numero para ser calculado o fatorial:\n");
    scanf("%d",&num);
    
    for(resul = 1; num > 0; num--)
    {
        resul = resul * num;
    }

    printf("%d",resul);
return 0;
}