/*Faça um programa que leia um número e diga se esse número é par ou não.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Digite um numero:\n");
    scanf("%d",&num);
    
    if (num % 2 == 0)
    {
    printf("O numero digitado é PAR!");
    }
    else
    {
        printf("O numero digitado é IMPAR");
    }
return 0;    
}
