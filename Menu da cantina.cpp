#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main(){
    
    
    system("color 0C");
    
    float menu[] = {5.00, 4.50, 3.00, 2.50, 1.50};
    char *items[] = {"Sanduíche", "Salada", "Fruta", "Refrigerante", "Água"};
    int n = sizeof(menu) / sizeof(menu[0]);
    float subtotal = 0.0;

    while (1) {
        printf("Menu:\n");
        for (int i = 0; i < n; i++) {
            printf("%s: R$%.2f\n", items[i], menu[i]);
        }

        char choice[20];
        printf("Escolha um item (ou 'sair' para finalizar): ");
        scanf("%19s", choice);

        if (strcmp(choice, "sair") == 0) {
            break;
        }

        int found = 0;
        for (int i = 0; i < n; i++) {
            if (strcmp(choice, items[i]) == 0) {
                subtotal += menu[i];
                printf("Você escolheu %s. Subtotal: R$%.2f\n", choice, subtotal);
                found = 1;
                break;
            }
        }

        if (!found) {
            printf("Item não encontrado no menu. Tente novamente!\n");
        }

        char response[2];
        printf("Deseja comprar mais um item? (s/n): ");
        scanf(" %1s", response);

        if (response[0] == 'n') {
            break;
        }
    }

    printf("Total a pagar: R$%.2f\n", subtotal);


}
