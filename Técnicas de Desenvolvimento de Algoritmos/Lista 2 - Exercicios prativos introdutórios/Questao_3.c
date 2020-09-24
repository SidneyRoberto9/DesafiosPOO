#include <stdio.h>

int main()
{
    int num,i;

    printf("Informe um Numero: ");
    scanf("%d", &num);

    for(i = num - 1; i > 1; i--){
        num *= i;
    }
    printf("O fatorial e' %d",num);

    return 0;
}
