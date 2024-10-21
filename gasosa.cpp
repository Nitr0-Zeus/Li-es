#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    system("color 1B");
    setlocale(LC_ALL, "PORTUGUESE");
    
    int litros;
    char tipo_combustivel; // Pra diferenciar o �lcool da gasolina
    float precog = 6.90;    // Pre�o da gasolina hoje em dia
    float precoa = 4.12;    // Pre�o do �lcool hoje em dia
    float descontoa1 = 0.03; // Desconto de 3% no �lcool at� 20 litros
    float descontog2 = 0.035; // Desconto de 3.5% na gasolina at� 20 litros
    float descontoa2 = 0.05;  // Desconto de 5% no �lcool acima de 20 litros
    float descontog3 = 0.06;  // Desconto de 8% na gasolina acima de 20 litros
    float preco_final;

    // Pergunta o quanto foi abastecido
    printf("Favor informar a quantidade de litros abastecidos: ");
    scanf("%d", &litros);

    // Pergunta o que abasteceu
    printf("Favor informe o que abasteceu: ");
    scanf(" %c", &tipo_combustivel); //(Espa�o antes de %c para ignorar espa�os em branco) Corre��o do ChatGPT

    // F�rmula pra calcular o desconto do combust�vel
    if (tipo_combustivel == 'A' || tipo_combustivel == 'a') {
        if (litros <= 20) {
            preco_final = precoa - (precoa * descontoa1); // Aplica��o do desconto pro �lcool at� 20 litros
        } else {
            preco_final = precoa - (precoa * descontoa2); // Aplica��o do desconto pro �lcool acima de 20 litros
        }
    } else if (tipo_combustivel == 'G' || tipo_combustivel == 'g') {
        if (litros <= 20) {
            preco_final = precog - (precog * descontog2); // Aplica��o do desconto pra gasolina at� 20 litros
        } else {
            preco_final = precog - (precog * descontog3); // Aplica��o do desconto pra gasolina acima de 20 litros
        }
    } else {
        printf("Tipo de combust�vel inv�lido.\n");
    }

    printf("O pre�o final por litro �: %.2f\n", preco_final);
}

