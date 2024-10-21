#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	
	system("color 0C");
	
}

int 	main() {
    int qb;
    printf("Digite a quantidade de bois: ");
    scanf("%d", &qb);

    int codigos[qb];
    float pesos[qb];

    int i;
    for (i = 0; i < qb; i++) {
        printf("Digite o código do boi %d: ", i + 1);
        scanf("%d", &codigos[i]);

        if (codigos[i] == 0) {
            break;
        }

        printf("Digite o peso do boi %d: ", i + 1);
        scanf("%f", &pesos[i]);
    }

    int qbr = i;

    if (qbr == 0) {
        printf("Nenhum boi registrado.\n");
        return 0;
    }

    int mais_gordo = 0;
    int mais_magro = 0;

    for (i = 1; i < qbr; i++) {
        if (pesos[i] > pesos[mais_gordo_]) {
            mais_gordo = i;
        }

        if (pesos[i] < pesos[mais_magro]) {
            mais_magro = i;
        }
    }

    printf("Boi mais gordo: código %d, peso %.2f kg\n", codigos[mais_gordo_], pesos[mais_gordo]);
    printf("Boi mais magro: código %d, peso %.2f kg\n", codigos[mais_magro], pesos[mais_magro]);

    return 0;
}
