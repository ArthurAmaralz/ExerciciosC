/*Elabore um program que receba um ano (numérico inteiro) e informe se o ano é bissexto ou 
não (anos bissextos são múltiplos de 4, 
portanto, se a divisão do ano por 4 gerar resto igual a zero, o ano é bissexto - use o operador %).*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;  
    printf("Digite o ano desejado:\n");
    scanf("%d",&ano);
    if (ano % 400 == 0) 
    {
        printf("O ano é bissexto!");		
    }
    else if ((ano % 4 == 0) && (ano % 100 != 0)) 
    {
        printf("O ano e bissexto!");	
    }
    else {
        printf("O ano nao e bissexto!");
    }
return 0;
}