#include <stdio.h>

int main()
{
    int esc = 1;

    while(esc != 0){
        system("cls");
        printf("-- X -- X -- X -- X -- X -- Menu -- X -- X -- X -- X -- X \n");
        printf(" 1 - Criar Conta\n");
        printf(" 2 - Editar Conta \n");
        printf(" 3 - Excluir Conta \n");
        printf(" 4 - Adicionar Contato \n");
        printf(" 5 - Ligar Para Contato \n");
        printf(" 6 - Editar Contado \n");
        printf(" 7 - Excluir Contado \n");
        printf(" 8 - Criar Grupo \n");
        printf(" 9 - Editar Grupo \n");
        printf(" 0 - Sair\n");
        printf("-- X -- X -- X -- X -- X --- X --- X -- X -- X -- X -- X \n");
        printf("\nEscolha: ");
        scanf("%d", &esc);
        getchar();

        switch(esc){
            case 0:
                printf("Obrigado Pela Preferencia Ate logo...");
                break;
            case 1:
                printf("Criando Conta...\nClique Enter para continuar...");
                getchar();
                break;
            case 2:
                printf("Editando Conta...\nClique Enter para continuar...");
                getchar();
                break;
            case 3:
                printf("Excluindo Conta...\nClique Enter para continuar...");
                getchar();
                break;
            case 4:
                printf("Adicionando Contato...\nClique Enter para continuar...");
                getchar();
                break;
            case 5:
                printf("Ligando para Contato...\nClique Enter para continuar...");
                getchar();
                break;
            case 6:
                printf("Editando Contato...\nClique Enter para continuar...");
                getchar();
                break;
            case 7:
                printf("Excluindo Contato...\nClique Enter para continuar...");
                getchar();
                break;
            case 8:
                printf("Criando Grupo...\nClique Enter para continuar...");
                getchar();
                break;
            case 9:
                printf("Editando Grupo...\nClique Enter para continuar...");
                getchar();
                break;
            default:
                printf("Opcao invalida...\nClique Enter para Tentar Novamente...");
                getchar();
                break;
        }
    }
    return 0;
}
