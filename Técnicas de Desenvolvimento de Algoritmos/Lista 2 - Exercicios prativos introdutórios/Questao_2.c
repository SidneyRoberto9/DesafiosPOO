#include <stdio.h>

int main()
{
    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("%d 'e um numero par.", num);
    } else {
        printf("%d nao 'e um numero par.", num);
    }
    return 0;
}
