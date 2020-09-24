#include <stdio.h>
#include <string.h>

int main() {

    int C, B, E, i, k, tam;
    char saida[100];

    scanf("%d", &C);

    while(C--){
        scanf("%d %d", &B, &E);

        for(i = B; i <= E; i++){
            printf("%d", i);
        }
        for(i = E; i >= B; i--){
            sprintf(saida, "%d", i);

            for(k = strlen(saida)- 1; k >= 0; k--){
                printf("%c",saida[k]);
            }
        }
        printf("\n");
    }

    return 0;
}
