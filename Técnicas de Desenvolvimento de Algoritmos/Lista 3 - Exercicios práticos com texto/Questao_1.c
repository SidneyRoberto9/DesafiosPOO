#include <stdio.h>

int main() {
    int i;
    char string[21], copia[21];

    printf("Digite(Com quantidade maxima de 20 caracteres): ");
    scanf("%s", string);

    for(i = 0; i < sizeof(string); i++){
        copia[i] = string[i];
    }
    printf("\nO Conteudo de String inicial: %s\n", string);
    printf("O Conteudo da Copia: %s\n", copia);

    return 0;
}
