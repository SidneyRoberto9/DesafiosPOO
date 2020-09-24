#include <stdio.h>

int main()
{
    int n, i, a = 0, b = 1, aux = a;

    scanf("%d", &n);

    for(i = 0; i < n-1; i++){
        a = b;
        b = aux;
        printf("%d ", aux);
        aux = a + b;

    }
    printf("%d\n", aux);
    return 0;
}
