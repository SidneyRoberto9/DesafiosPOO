#include <stdio.h>

int main()
{
    int qpg, raz, i, pg = 1;

    printf("Informe a quantidade de numeros para a Progressao Geometrica(PG): ");
    scanf("%d", &qpg);
    printf("Informe a Razao: ");
    scanf("%d", &raz);

    for(i = 0; i < qpg; i++){
        printf("%d ", pg);
        pg *= raz;
    }
    return 0;
}
