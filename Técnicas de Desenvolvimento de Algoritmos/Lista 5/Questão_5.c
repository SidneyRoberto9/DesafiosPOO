#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

int n_conta = 0;

struct account{
    int existe;
    char nome[100];
    int senha;
    int chave[3];
    float saldo;
}conta[10];

void l(int esc){
    if(esc == 1)
        setbuf(stdin, NULL);
    else if (esc == 2)
        system("cls");
    else if(esc == 3){
        setbuf(stdin, NULL);
        system("cls");
    } else if(esc == 4) {
        setbuf(stdin, NULL);
        printf("Pressione qualquer tecla para voltar ao menu...");
        getchar();
        setbuf(stdin, NULL);
    }
}

void zerar(){
    int i;
    l(1);
    for(i = 0; i < 10; i++)conta[i].existe = 0;
}

void criar_conta(){
    int i, k, letras[25] = {NULL};
    srand(time(NULL));
    l(3);

    for(i = 0; i < 10; i++){
        if(conta[i].existe == 0){
            n_conta = i;
            break;
        }
    }

    conta[n_conta].existe = 1;
    printf("Menu de Criação de Conta\n");
    printf("Regras:\n1 - O nome sempre deve ser em minusculo em ate 100 caracteres\n2 - A senha deve ser numerica\n3 - Anote sua chave ela pode ser nescessaria depois\n");

    printf("\nNome: ");
    fgets(conta[n_conta].nome, 100, stdin);


    printf("Senha: ");
    scanf("%d", &conta[n_conta].senha);

    for(i = 97, k = 0; i < 122; i++, k++)letras[k] = i;
    for(i = 0; i < 3; i++)conta[n_conta].chave[i] = letras[rand() % 25];

    printf("Sua Chave é: %c%c%c\n", conta[n_conta].chave[0],conta[n_conta].chave[1],conta[n_conta].chave[2]);
    printf("Numero da Sua Conta é: %d\n", n_conta);

    l(4);
    conta[n_conta].saldo = 0.0;
    n_conta++;
}

void saldo(){
    int n, sen;
    l(3);
    printf("Verificação de Saldo\n");
    printf("Informe o Numero da conta: ");
    scanf("%d", &n);

    if(conta[n].existe == 1){
        printf("senha: ");
        scanf("%d", &sen);

        if(sen == conta[n].senha){
            printf("\nSeu saldo é: R$ %.2f\n", conta[n].saldo);
        } else {
            printf("\nSenha invalida...\n");
        }
    } else {
        printf("\nConta inexistente...\n");
    }
    l(4);
}

void deposito(){
    int n, name[100];
    float valor;
    l(3);
    printf("Deposito na Conta\n");
    printf("Informe o Numero da conta: ");
    scanf("%d", &n);
    l(1);
    if(conta[n].existe == 1){
        printf("Nome Do Titular da Conta: ");
        fgets(name, 100 ,stdin);

        if(strcmp(name, conta[n].nome) == 0){
            printf("\nQual o valor desejado para o deposito: R$ ");
            scanf("%f", &valor);
            conta[n].saldo = conta[n].saldo + valor;
            printf("\nValor deposidato\n\n");
        } else {
            printf("\nNome invalido...\n");
        }
    } else {
        printf("\nConta inexistente...\n");
    }
    l(4);
}

void sacar(){
    int n, sen, i, correto = 0;
    float valor = 0;
    char k[3];
    l(3);
    printf("Verificação de Saldo\n");
    printf("Informe o Numero da conta: ");
    scanf("%d", &n);

    if(conta[n].existe == 1){
        printf("senha: ");
        scanf("%d", &sen);
        l(1);
        printf("Chave: ");
        for(i = 0; i< 3; i++){
            scanf("%c", &k[i]);
        }

        if(sen == conta[n].senha){
            for(i = 0; i < 3; i++)if(conta[n].chave[i] == k[i])correto++;
            if(correto == 3){
                l(1);
                printf("\nInforme o Valor de Saque: R$ ");
                scanf("%f", &valor);
                conta[n].saldo = conta[n].saldo - valor;
                printf("\nSaque realizado com Sucesso...\n\n");

            }else{
                printf("\nChave Invalida...\n");
            }
        } else {
            printf("\nSenha invalida...\n");
        }
    } else {
        printf("\nConta inexistente...\n");
    }
    l(4);
}

void encerrar(){
    int n, sen, i, correto = 0, esc;
    char k[3];
    l(3);
    printf("Verificação de Saldo\n");
    printf("Informe o Numero da conta: ");
    scanf("%d", &n);

    if(conta[n].existe == 1){
        printf("senha: ");
        scanf("%d", &sen);
        l(1);
        printf("Chave: ");
        for(i = 0; i< 3; i++){
            scanf("%c", &k[i]);
        }

        if(sen == conta[n].senha){
            for(i = 0; i < 3; i++)if(conta[n].chave[i] == k[i])correto++;
            if(correto == 3){
                l(1);
                printf("deseja Realmente encerrar a conta?\n");
                printf("'S' para sim e 'N' para não\n");
                scanf("%c", &esc);
                if(esc == 'S' || esc == 's'){
                    conta[n].existe = 0;
                    printf("\nApagando Dados");
                    sleep(1);
                    printf(".");
                    sleep(1);
                    printf(".");
                    sleep(1);
                    printf(".");
                    sleep(1);
                    printf(".");
                    sleep(1);
                    printf(".\n");

                } else if (esc == 'N'||esc == 'n'){
                    printf("\n");

                } else {
                    printf("\nEntrada invalida...\n");
                }
            }else{
                printf("\nChave Invalida...\n");
            }
        } else {
            printf("\nSenha invalida...\n");
        }
    } else {
        printf("\nConta inexistente...\n");
    }
    l(4);


}

int main(){
    setlocale(LC_ALL,"");
    int esc;
    zerar();

    while(esc = -1){
        l(3);
        printf("-- X -- X -- X -- X -- X -- X  -- X -- X -- X -- X -- \n");
        printf("\n\t\t\tMENU\t\t\t\n");
        printf("1 - CRIAR CONTA\n");
        printf("2 - CONSULTAR SALDO\n");
        printf("3 - DEPOSITAR VALOR\n");
        printf("4 - SACAR UM VALOR\n");
        printf("5 - ENCERRAR CONTA\n");
        printf("6 - SAIR \n");
        printf("\n-- X -- X -- X -- X -- X -- X  -- X -- X -- X -- X -- \n");
        printf("ESCOLHA: ");
        scanf("%d", &esc);

        if(esc == 1) criar_conta();
        else if (esc == 2) saldo();
        else if (esc == 3) deposito();
        else if (esc == 4) sacar();
        else if (esc == 5) encerrar();
        else if (esc == 6)return 0;
        else{
            printf("Opção Invalida, Reinicando");
            sleep(1);
            printf(".");
            sleep(1);
            printf(".");
            sleep(1);
            printf(".");
            sleep(1);
            continue;
        }
    }


    return 0;
}
