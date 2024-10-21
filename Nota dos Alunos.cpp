#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "PORTUGUESE");
    
    system("color 0C");

    float notas[10], media_T, Soma_T = 0; // Variavel das notas
    int i;

    for (i = 0; i < 10; i++) { 
        printf("\nFavor informar a nota do aluno %i: ", i + 1); 
        scanf("%f", &notas[i]); 
        Soma_T += notas[i]; // Soma
    }

    for (i = 0; i < 10; i++) {
        printf("A nota do aluno %i é: %.2f\n", i + 1, notas[i]); 
    }

    media_T = Soma_T / 10; // Calculo da média

    printf("A média da turma é: %.2f\n", media_T); 

}
