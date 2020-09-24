#include <stdio.h>
#include <string.h>
//Esse me prendeu por umas Boas horas, Vou explicar direitinho

int main() {
    int n1, n2, i, total[21],soma;

    while((scanf("%d %d", &n1, &n2)) && (n1 != 0 || n2 != 0)){ /*Uso o scanf para adiquirir as variaveis e ao mesmo
                                                                tempo eu verifico se os valores informasdos são diferentes
                                                                de zero por isso um || "ou" logo ali */
        soma = n1 + n2;

        for(i = 0 ; i < 21 ; i++){
        /*  Colocando os valores dentro de uma lista de inteiros, porque o numero 21?, Foi escolha aleatoria
            o soma % 10 entra o o primeiro valor que é colocado depois da virgula por ter dividido por 10,
            assim vou dividindo por 10 ate não sobrar nada.
        */
			total[i] = soma % 10;
			soma = soma / 10;
		}

		for(i = 20 ; i >= 0 ; i--){
        /*  Aqui foi 20 por ter qye ser menor que o anteiror, fato de um dos "numero" serem na verdade o '\0'
            e ele vai de ordem decrescente pois anteriormente foi posto de traz pra frente os numeros
            a verifição do if abaixo é sobre os 21 caracteres ou numeros inseridos na lista, tudo que foi
            desnecessario seria contabilizado como esse zero
        */
			if(total[i] != 0){
				printf("%d",total[i]);
			}
		}
		printf("\n");
    }

    return 0;
}
