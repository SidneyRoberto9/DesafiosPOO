#include <stdio.h>

int main() {
    char string[21];
    int len = 0;

    printf("Quantidade Maxima de Caracteres igual a 20!!\n");
    printf("Digite: ");
    scanf("%s", string);

    while(string[len] != '\0')len++;

    printf("\nO tamanho da String, %s, equivale a %d.", string, len);

    return 0;
}
