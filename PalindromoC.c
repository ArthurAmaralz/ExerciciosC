#include <stdio.h>
#include <stdlib.h> 
#include<string.h>

int main(void) 
{
    char palavra[50],contrario[50];
    int total=0,i,j,erro=0;

    printf("Digite a palavra:\n");
    scanf("%s",&palavra);

    total = strlen(palavra);
    j = total;
    total++;
    j--;

    for(i=0; i < total; i++) {
    contrario[i] = palavra[j];
    j--;
    }

    total--;

    for(i=0; i < total; i++) {
    if(palavra[i] != contrario[i]) { erro = 1; }
    }

    if(erro == 1) 
        printf("\nNao e palindromo.");
    else 
        printf("\nE palindromo.");
    }