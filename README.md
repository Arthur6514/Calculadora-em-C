📖 Descrição do Código
O programa foi estruturado para ser intuitivo e resiliente. Ele utiliza um menu principal que orienta o usuário através de escolhas numéricas, processando as operações aritméticas básicas de forma instantânea.

Principais Componentes Lógicos:
Menu Dinâmico: Implementado com do-while, garantindo que o programa só feche quando o usuário solicitar.

Seleção de Operações: Uso eficiente da estrutura switch-case para direcionar o fluxo de cálculo.

Precisão Decimal: Tratamento de números reais (float) com saída formatada para duas casas decimais.

🌟 Operações Disponíveis
➕ Soma: Adição simples entre dois valores.

➖ Subtração: Cálculo de diferença.

✖️ Multiplicação: Produto entre os números inseridos.

➗ Divisão: Quociente (ideal para cálculos de razão).

🚪 Saída Controlada: Opção para encerrar a execução do programa.

🛠️ Tecnologias Utilizadas
Linguagem C (Padrão C99/C11)

Biblioteca Standard Input/Output (stdio.h)

Compilador GCC (recomendado)

💻 Código Fonte Completo
Abaixo está o código fonte com a marcação correta para que o GitHub aplique as cores da linguagem C:

C
#include <stdio.h>

/**
 * @brief Programa de Calculadora Interativa
 * Realiza operações básicas: soma, subtração, multiplicação e divisão.
 */

int main() {
    int opcao;
    float n1, n2;

    printf("----- Calculadora Interativa -----\n\n");

    printf("1 - Somar dois numeros\n");
    printf("2 - Subtrair dois numeros\n");
    printf("3 - Multiplicar dois numeros\n");
    printf("4 - Dividir dois numeros\n");
    printf("5 - Sair\n\n");

    do {
        printf("Escolha uma das opcoes: ");
        scanf("%d", &opcao);

        switch(opcao) {
        case 1:
            printf("\n> Operacao: SOMA\n");
            printf("Digite o primeiro numero: ");
            scanf("%f", &n1);
            printf("Digite o segundo numero: ");
            scanf("%f", &n2);
            printf("Resultado da soma: %.2f", n1 + n2);
            break;

        case 2:
            printf("\n> Operacao: SUBTRACAO\n");
            printf("Digite o primeiro numero: ");
            scanf("%f", &n1);
            printf("Digite o segundo numero: ");
            scanf("%f", &n2);
            printf("Resultado da subtracao: %.2f", n1 - n2);
            break;

        case 3:
            printf("\n> Operacao: MULTIPLICACAO\n");
            printf("Digite o primeiro numero: ");
            scanf("%f", &n1);
            printf("Digite o segundo numero: ");
            scanf("%f", &n2);
            printf("Produto dos dois numeros: %.2f", n1 * n2);
            break;

        case 4:
            printf("\n> Operacao: DIVISAO\n");
            printf("Digite o primeiro numero: ");
            scanf("%f", &n1);
            printf("Digite o segundo numero: ");
            scanf("%f", &n2);
            
            // Verificação básica de divisão por zero
            if (n2 != 0) {
                printf("Quociente dos dois numeros: %.2f", n1 / n2);
            } else {
                printf("Erro: Divisao por zero nao permitida!");
            }
            break;

        case 5:
            printf("\nSaindo do sistema...");
            break;

        default:
            printf("\n[!] Opcao Invalida! Tente uma opcao entre 1 e 5.");
        }
        printf("\n\n");
    } while (opcao != 5);
    
    printf("Obrigado por usar a calculadora!\n");
    return 0;
}
