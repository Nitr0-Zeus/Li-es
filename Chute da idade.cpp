#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>








int main() {
	setlocale(LC_ALL,"PORTUGUESE");
	
	system("color 0C");
    int idade_kleber = 37;
    int palpite;

    printf("Tente adivinhar a idade de Kleber B.!\n");

    while (1) {
        printf("Digite um palpite: ");
        scanf("%d", &palpite);

        if (palpite < idade_kleber) {
            printf("Muito baixo!\n");
        } else if (palpite > idade_kleber) {
            printf("Muito alto!\n");
        } else {
            printf("Parabéns! Você acertou a idade de Kleber B.: %d anos.\n", idade_kleber);
        }
}
}
    

