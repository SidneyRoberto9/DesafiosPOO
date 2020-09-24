#include<stdio.h>

int main() {
    char string[21], string_reversa[21];
    int i, k, len, retorno = 0;

    printf("Quantidade Maxima de Caracteres igual a 20!!\n");
    printf("Digite: ");
    scanf("%s", string);

    while(string[len] != '\0')len++; //Verificando o tamanho da string

    for(i = len, k = 0; i > 0; i--, k++){ //Colocando o reverso da string principal em outra string
        string_reversa[k] = string[i-1];
    }

    for(i = 0; i < len; i++){ //Verificando se a string é Palindromo
        if(string[i] != string_reversa[i]){
            retorno = 1;
            break;
        }
    }

    if(retorno == 0){
        printf("\nA string, %s, e' Palindromo.", string);
    } else {
        printf("\nA string, %s, nao e' Palindromo.", string);
    }

    return 0;
}
