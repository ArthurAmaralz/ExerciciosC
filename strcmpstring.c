#include <string.h>
#include <stdio.h>

int main(void)
{
    int c = 1;
    while(c)
    {
        char nome[15], nome2[15];
        printf("Digite dois nomes:\n");
        scanf("%s\n" ,&nome);
        scanf("%s" ,&nome2);
        
        if (strcmp(nome, nome2) == 0)
        {
            printf("Nomes iguais\n");
        }
        else
        {
            printf("Nomes diferentes\n");
        }
        printf("Digite 0 para sair, se nao digite 1...\n");
        scanf("%d",&c);
        
        if(c == 0)
        {
            break;
        }
    }
return 0;
}