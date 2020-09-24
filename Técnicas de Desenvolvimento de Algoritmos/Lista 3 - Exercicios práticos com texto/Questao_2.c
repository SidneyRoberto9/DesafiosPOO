#include <stdio.h>

int main(){
    char string1[21], string2[21];
    int i, retorno = 0;

    printf("Quantidade Maxima de Caracteres igual a 20!!\n");
    printf("Digite: ");
    scanf("%s", string1);
    printf("Digite: ");
    scanf("%s", string2);

    for(i = 0; string1[i] != '\0'; i++){
        if(string1[i] != string2[i]){
            retorno = 1;
            break;
        }
    }

    for(i = 0; string2[i] != '\0'; i++){
        if(string1[i] != string2[i]){
            retorno = 1;
            break;
        }
    }

    if(retorno == 0){
        printf("\nEles sao iguais, Valor de retorno = %d",retorno);
    } else {
        printf("\nEles sao diferentes, Valor de retorno %d",retorno);
    }

    return 0;
}
