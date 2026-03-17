🔢 CALCULADORA INTERATIVA EM C

    Status: Finalizado ✅


    Linguagem: C (GCC)


💻 SOBRE O PROJETO

    Este é um sistema de calculadora desenvolvido para terminal. O diferencial deste código é o uso do laço do-while, que permite realizar múltiplos cálculos sem reiniciar o programa.


🛠️ FUNCIONALIDADES

    1. Soma: Adição de dois valores reais.

    2. Subtração: Diferença entre números.

    3. Multiplicação: Cálculo de produto.

    4. Divisão: Quociente (com trava de segurança para zero).

    5. Sair: Encerramento do programa.

⚙️ CONCEITOS APLICADOS

    switch-case para o menu.

    scanf e printf para interação.

    float para números decimais.

📄 CÓDIGO FONTE

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
            if(n2 != 0) {
                printf("Resultado: %.2f", n1 / n2);
            } else {
                printf("Erro: Divisao por zero!");
            }
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
