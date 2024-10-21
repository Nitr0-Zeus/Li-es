#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    system("color 1B");
    setlocale(LC_ALL, "PORTUGUESE");
    
    int litros;
    char tipo_combustivel; // Pra diferenciar o álcool da gasolina
    float precog = 6.90;    // Preço da gasolina hoje em dia
    float precoa = 4.12;    // Preço do álcool hoje em dia
    float descontoa1 = 0.03; // Desconto de 3% no álcool até 20 litros
    float descontog2 = 0.035; // Desconto de 3.5% na gasolina até 20 litros
    float descontoa2 = 0.05;  // Desconto de 5% no álcool acima de 20 litros
    float descontog3 = 0.06;  // Desconto de 8% na gasolina acima de 20 litros
    float preco_final;

    // Pergunta o quanto foi abastecido
    printf("Favor informar a quantidade de litros abastecidos: ");
    scanf("%d", &litros);

    // Pergunta o que abasteceu
    printf("Favor informe o que abasteceu: ");
    scanf(" %c", &tipo_combustivel); //(Espaço antes de %c para ignorar espaços em branco) Correção do ChatGPT

    // Fórmula pra calcular o desconto do combustível
    if (tipo_combustivel == 'A' || tipo_combustivel == 'a') {
        if (litros <= 20) {
            preco_final = precoa - (precoa * descontoa1); // Aplicação do desconto pro álcool até 20 litros
        } else {
            preco_final = precoa - (precoa * descontoa2); // Aplicação do desconto pro álcool acima de 20 litros
        }
    } else if (tipo_combustivel == 'G' || tipo_combustivel == 'g') {
        if (litros <= 20) {
            preco_final = precog - (precog * descontog2); // Aplicação do desconto pra gasolina até 20 litros
        } else {
            preco_final = precog - (precog * descontog3); // Aplicação do desconto pra gasolina acima de 20 litros
        }
    } else {
        printf("Tipo de combustível inválido.\n");
    }

    printf("O preço final por litro é: %.2f\n", preco_final);
}

