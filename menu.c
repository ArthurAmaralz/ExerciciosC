/*Crie um Menu. O menu deverá ter opções quaisquer de 1 a 9, se o usuário digitar algum número entre 1 e 9, o programa deverá reexibir o menu.
Caso o usuário digitar qualquer outro número, com exceção do 0, o programa deve informar que a opção desejada é inexistente.
E por fim, caso o usuário digitar 0, o programa deve exibir mensagem de despedida e terminar sua execução.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int num = -1;
    while (num != 0)
    {   
        printf("<<<Bem vindo ao Menu>>>\n Escolha uma das opções abaixo:\n 1º) Jogos\n 2º) Filmes\n 3º) Desenhos\n 4º) Documentarios\n 5º) Noticias\n 6º) Internet\n 7º) Outros\n 8º) Suport\n 9º) Configurações\n 0º) Para Sair\n");
        scanf("%d",&num);
      
        switch(num){
            case 0:
                printf("Até mais e Obrigado!");
            case 1:
                printf("Você entrou na opção Jogos!\n(aperte 0 para sair)");
                scanf("%d",&num);
                if(num == 0)
                    printf("Até mais e Obrigado!");
                break;
            case 2:
                printf("Você entrou na opção Filmes!\n(aperte 0 para sair)");
                scanf("%d",&num);
                if(num == 0)
                    printf("Até mais e Obrigado!");
                break;
            case 3:
                printf("Você entrou na opção Desenhos!\n(aperte 0 para sair)");
                scanf("%d",&num);
                if(num == 0)
                    printf("Até mais e Obrigado!");
                break;
            case 4:
                printf("Você entrou na opção Documentarios!\n(aperte 0 para sair)");
                scanf("%d",&num);
                if(num == 0)
                    printf("Até mais e Obrigado!");
                break;
            case 5:
                printf("Você entrou na opção Noticias!\n(aperte 0 para sair)");
                scanf("%d",&num);
                if(num == 0)
                    printf("Até mais e Obrigado!");
                break;
            case 6:
                printf("Você entrou na opção Internet!\n(aperte 0 para sair)");
                scanf("%d",&num);
                if(num == 0)
                    printf("Até mais e Obrigado!");
                break;
            case 7:
                printf("Você entrou na opção Outros!\n(aperte 0 para sair)");
                scanf("%d",&num);
                if(num == 0)
                    printf("Até mais e Obrigado!");
                break;
            case 8:
                printf("Você entrou na opção Suport!\n(aperte 0 para sair)");
                scanf("%d",&num);
                if(num == 0)
                printf("Até mais e Obrigado!");
                break;
            case 9:
                printf("Você entrou na opção Configurações!\n(aperte 0 para sair)");
                scanf("%d",&num);
                if(num == 0)
                    printf("Até mais e Obrigado!");
                break;
            default:
                printf("Oção invalida\n");
                scanf("%d",&num);
                if(num == 0)
                    printf("Até mais e Obrigado!");
        }
    }
return 0;
}