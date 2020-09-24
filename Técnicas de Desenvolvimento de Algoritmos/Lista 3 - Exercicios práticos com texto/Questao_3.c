#include <stdio.h>

int main() {
    char string1[42], string2[21];
    int i, k,entrada = 0;

    printf("Quantidade Maxima de Caracteres igual a 20!!\n");
    printf("Digite: ");
    scanf("%s", string1);
    printf("Digite: ");
    scanf("%s", string2);

    for(i = 0, k = 0; i < sizeof(string1); i++){
        if(string1[i] == '\0' || entrada == 1){
            string1[i] = string2[k];
            k++;
            entrada = 1;
        }
    }
    printf("As strings concatenadas: %s", string1);

    return 0;
}
