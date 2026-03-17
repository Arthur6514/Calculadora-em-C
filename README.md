💻 Sobre o Projeto

Este é um sistema de calculadora desenvolvido para terminal. O diferencial deste código é o uso do laço do-while, que permite que o utilizador realize múltiplos cálculos sem precisar reiniciar o programa a cada operação.

🛠️ Funcionalidades

O menu interativo oferece as seguintes opções:

1. Soma: Adição de dois valores reais.

2. Subtração: Operação de diferença entre números.

3. Multiplicação: Cálculo de produto.

4. Divisão: Quociente entre dois números (com lógica de menu).

5. Sair: Encerramento seguro da aplicação.

⚙️ Conceitos Aplicados

switch-case: Para seleção limpa de opções no menu.

scanf/printf: Para interação fluida com o terminal.

float: Suporte para cálculos com casas decimais.

📄 Código Fonte

C
```c
#include <stdio.h>

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
            printf("Resultado: %.2f", n1 + n2);
            break;
        case 2:
            printf("\n> Operacao: SUBTRACAO\n");
            printf("Digite o primeiro numero: ");
            scanf("%f", &n1);
            printf("Digite o segundo numero: ");
            scanf("%f", &n2);
            printf("Resultado: %.2f", n1 - n2);
            break;
        case 3:
            printf("\n> Operacao: MULTIPLICACAO\n");
            printf("Digite o primeiro numero: ");
            scanf("%f", &n1);
            printf("Digite o segundo numero: ");
            scanf("%f", &n2);
            printf("Resultado: %.2f", n1 * n2);
            break;
        case 4:
            printf("\n> Operacao: DIVISAO\n");
            printf("Digite o primeiro numero: ");
            scanf("%f", &n1);
            printf("Digite o segundo numero: ");
            scanf("%f", &n2);
            if(n2 != 0)
                printf("Resultado: %.2f", n1 / n2);
            else
                printf("Erro: Divisao por zero!");
            break;
        case 5:
            printf("Saindo...");
            break;
        default:
            printf("Opcao Invalida! Tente novamente.\n");
        }
        printf("\n\n");
    } while (opcao != 5);
    
    return 0;
}
```
