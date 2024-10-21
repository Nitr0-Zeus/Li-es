#include <stdio.h>

#define DIAS_SEMANA 7

int main() {
    float peso[DIAS_SEMANA]; // Vetor peso diário
    float soma_peso = 0; // Variável de soma dos pesos
    float media_perda_peso; // Variável do calculo de perda de peso
    int dia; // Variável de dia da semana

    for (dia = 0; dia < DIAS_SEMANA; dia++) {
        printf("Digite o seu peso do dia %d: ", dia + 1);
        scanf("%f", &peso[dia]);
        soma_peso += peso[dia]; // Soma o peso do dia
    }

    
    media_perda_peso = (peso[0] - peso[DIAS_SEMANA - 1]) / (DIAS_SEMANA - 1);

    printf("\nLista de pesos diários:\n");
    for (dia = 0; dia < DIAS_SEMANA; dia++) {
        printf("Dia %d: %.2f kg\n", dia + 1, peso[dia]);
    }
    printf("\nMédia de perda de peso diária: %.2f kg\n", media_perda_peso);

}
