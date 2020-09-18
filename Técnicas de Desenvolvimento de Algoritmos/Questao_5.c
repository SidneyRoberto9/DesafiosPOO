#include <stdio.h>

int main()
{
    int qpa, raz, i, pa = 0;

    printf("Informe a quantidade de numeros para a Progressao aritmetica(PA): ");
    scanf("%d", &qpa);
    printf("Informe a Razao: ");
    scanf("%d", &raz);

    for(i = 0; i < qpa; i++){
        printf("%d ", pa);
        pa += raz;
    }
    return 0;
}
