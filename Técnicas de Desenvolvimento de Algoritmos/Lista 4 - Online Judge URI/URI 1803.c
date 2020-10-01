#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//OBS: NÃO CONSEGUI ACERTAR NO URI, POREM ESTA FUNCIONANDO...

int main(){

    int i, k, tam;
    char m[4][80], mchar[4], a;

    for(i = 0; i < 4; i++){
        scanf("%s", m[i]);
    }

    tam = strlen(m[0]);

    int mint[tam];
    char saida[tam][4];

    for(i = 0; i < 4; i++){
        for(k = 0; k < tam; k++){
            saida[k][i] = m[i][k];
        }
    }

    for(i = 0; i < tam; i++){
        for(k = 0; k < 4; k++){
            a = saida[i][k];
            mchar[k] = a;
            mchar[k + 1] = '\0';
        }
        mint[i] = atoi(mchar);
    }

    printf("\n");

    for(i = 1; i < tam - 1; i++){
        printf("%c",(((mint[0] * mint[i]) + mint[tam - 1]) % 257));

    }
    printf("\n");

    return 0;
}
