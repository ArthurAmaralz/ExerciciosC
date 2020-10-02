#include <string.h>
#include <stdio.h>

int main(void)
{
    int c = 1;
    while(c)
    {
        char nome[15], nome2[15];
        printf("Digite o primeiro nome:\n");
        scanf("%s" ,&nome);
        printf("Digite o segundo nome:\n");
        scanf("%s" ,&nome2);
        
        puts(strcat(nome, nome2));

        printf("Digite 0 para sair, se nao digite 1...\n");
        scanf("%d",&c);
        
        if(c == 0)
        {
            break;
        }
    }
return 0;
}