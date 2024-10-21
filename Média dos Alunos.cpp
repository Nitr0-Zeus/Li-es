#include <stdio.h>

#define DIAS_SEMANA 7

int main() {
    float peso[DIAS_SEMANA]; // Vetor peso di�rio
    float soma_peso = 0; // Vari�vel de soma dos pesos
    float media_perda_peso; // Vari�vel do calculo de perda de peso
    int dia; // Vari�vel de dia da semana

    for (dia = 0; dia < DIAS_SEMANA; dia++) {
        printf("Digite o seu peso do dia %d: ", dia + 1);
        scanf("%f", &peso[dia]);
        soma_peso += peso[dia]; // Soma o peso do dia
    }

    
    media_perda_peso = (peso[0] - peso[DIAS_SEMANA - 1]) / (DIAS_SEMANA - 1);

    printf("\nLista de pesos di�rios:\n");
    for (dia = 0; dia < DIAS_SEMANA; dia++) {
        printf("Dia %d: %.2f kg\n", dia + 1, peso[dia]);
    }
    printf("\nM�dia de perda de peso di�ria: %.2f kg\n", media_perda_peso);

}
