#include <stdio.h>

#define DIAS_SEMANA 7

int main() {
    float peso[DIAS_SEMANA]; 
    float soma_peso = 0;
    float media_perda_peso; 
    int dia; 

    for (dia = 0; dia < DIAS_SEMANA; dia++) {
        printf("Digite o seu peso do dia %d: ", dia + 1);
        scanf("%f", &peso[dia]);
        soma_peso += peso[dia]; 
    }

    
    media_perda_peso = (peso[0] - peso[DIAS_SEMANA - 1]) / (DIAS_SEMANA - 1);

    printf("\nLista de pesos diários:\n");
    for (dia = 0; dia < DIAS_SEMANA; dia++) {
        printf("Dia %d: %.2f kg\n", dia + 1, peso[dia]);
    }
    printf("\nMédia de perda de peso diária: %.2f kg\n", media_perda_peso);

}
