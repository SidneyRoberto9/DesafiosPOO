/*Uma empresa comercial possui um programa para controle das receitas e despesas em seus 10 projetos.
Os projetos são numerados de 0 até 9.
Faça um programa C que controle a entrada e saída de recursos dos projetos.
O programa deverá ler um conjunto de informações contendo:
Número do projeto, valor, tipo despesa ("R" - Receita e "D" - Despesa).
O programa termina quando o valor do código do projeto for igual a -1.
Sabe-se que Receita deve ser somada ao saldo do projeto e despesa subtraída do saldo do projeto.
Ao final do programa, imprimir o saldo final de cada projeto.

Dica: Usar uma estrutura do tipo vetor para controlar os saldos dos projetos.
Usar o conceito de struct para agrupar as informações lidas.
*/
#include <stdio.h>

struct projeto{
    int saldo;
}p[10];

int main(){
    int i, esc = 0,r = 0, d = 0 ,s = 0;
    char esc2;

    for(i = 0; i< 10; i++){
        p[i].saldo = 0;

    }

    while(esc != -1){
        system("cls");
        printf("Informe o Projeto projeto\n(Variando de 1 a 10)\nDigite 0 para sair\nNumero: ");
        scanf("%d", &esc);

        esc = esc - 1;

        for(i = 0; i < 10; i++){
            if((esc) == -1){
                printf("Numero de saida selecionado!!\n");
                sleep(2);
                s = 1;
                break;
            } else if(esc > 10 || esc < 0){
               printf("Numero de Projeto Invalido!!\n");
                sleep(2);
                s = 1;
                break;
            };
        }

        if(s == 1){
            s = 0;
            continue;
        }


        if(p[esc].saldo == 0){
            printf("Informe o Valor do projeto: ");
            scanf("%d", &p[esc].saldo);
        }
        setbuf(stdin,NULL);
        printf("Informe o Tipo de depesa\n('R' - Receita e 'D' - Despesa)\nTipo: ");
        scanf("%c", &esc2);
        setbuf(stdin,NULL);

        if(esc2 == 'R' || esc2 == 'r'){
            printf("Quanto de Receita: ");
            scanf("%d", &r);
            p[esc].saldo += r;

        } else if (esc2 == 'D'||esc2 == 'd'){
            printf("Quanto de Despesas: ");
            scanf("%d", &d);
            p[esc].saldo -= d;

        } else {
            printf("Entrada invalida...\n");
        }

        printf("Mudando de projeto.");
        sleep(1);
        printf(".");
        sleep(1);
        printf(".");
        sleep(1);

    }
    system("cls");
    for(i = 0; i < 10; i++){
        printf("O saldo do projeto %2d = %d\n", i + 1, p[i].saldo);
    }


    return 0;
}
