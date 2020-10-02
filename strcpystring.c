#include <string.h>
#include <stdio.h>

int main(void)
{
    int c = 1;
    while(c)
    {
        char nome[15], copia[15];
        printf("Seu primeiro nome:\n");
        scanf("%s" ,&nome);

        strcpy(copia, nome);
        printf("O nome informado foi: \n");
        puts(copia);

        printf("Digite 0 para sair, se nao digite 1...\n");
        scanf("%d",&c);
        
        if(c == 0)
        {
            break;
        }
    }
return 0;
}