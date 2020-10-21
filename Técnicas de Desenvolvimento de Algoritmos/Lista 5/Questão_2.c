#include <stdio.h>

struct horario{
    int hora;
    int minutos;
    int segundos;
};

struct data{
    int dia;
    int mes;
    int ano;
};

struct compromisso{
    struct horario h_padrao;
    struct data d_padrao;
    char texto[500];
};


int main(){
    struct compromisso casa;

    casa.h_padrao.hora = 15;
    casa.h_padrao.minutos = 10;
    casa.h_padrao.segundos = 35;

    printf("%d:%d:%d\n", casa.h_padrao.hora, casa.h_padrao.minutos, casa.h_padrao.segundos);

    casa.d_padrao.dia = 05;
    casa.d_padrao.mes = 07;
    casa.d_padrao.ano = 2020;

    printf("%d/%d/%d\n", casa.d_padrao.dia, casa.d_padrao.mes, casa.d_padrao.ano);

   fgets(casa.texto, 100, stdin);

    printf("%s\n",casa.texto);

    return 0;
}
