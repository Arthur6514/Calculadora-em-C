#include <stdio.h>

int main() {
    int opcao;
    float n1, n2;

    printf("-----Calculadora Interativa-----\n\n");

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
            printf("\nDigite o primeiro numero: ");
            scanf("%f", &n1);

            printf("Digite o segundo numero: ");
            scanf("%f", &n2);

            printf("Resultado da soma: %.2f", n1 + n2);
            break;
        case 2:
            printf("\nDigite o primeiro numero: ");
            scanf("%f", &n1);

            printf("Digite o segundo numero: ");
            scanf("%f", &n2);

            printf("Resultado da subtracao: %.2f", n1 - n2);
            break;
        case 3:
            printf("\nDigite o primeiro numero: ");
            scanf("%f", &n1);

            printf("Digite o segundo numero: ");
            scanf("%f", &n2);

            printf("Produto dos dois numeros: %.2f", n1 * n2);
            break;
        case 4:
            printf("\nDigite o primeiro numero: ");
            scanf("%f", &n1);

            printf("Digite o segundo numero: ");
            scanf("%f", &n2);

            printf("Quociente dos dois numeros: %.2f", n1 / n2);
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