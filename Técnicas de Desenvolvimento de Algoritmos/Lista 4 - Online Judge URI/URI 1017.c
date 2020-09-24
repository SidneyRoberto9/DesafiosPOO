#include <stdio.h>

int main()
{
    int a, b;
    float gasto;

    scanf("%d", &a);
    scanf("%d", &b);

    gasto = (float) (a * b)/12;

    printf("%.3f\n", gasto);

    return 0;
}
