#include <stdio.h>

int main() {
    int opcao;
    float saldo = 1000;
    float emprestimo = 0;
    float valor;

    do {
        printf("\n1 - Verificar saldo");
        printf("\n2 - Depositar valor");
        printf("\n3 - Sacar valor");
        printf("\n4 - Pedir emprestimo");
        printf("\n5 - Pagar emprestimo");
        printf("\n6 - Consultar emprestimo");
        printf("\n7 - Sair");
        printf("\nOpcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Saldo: R$ %.2f\n", saldo);
                break;

            case 2:
                printf("Valor para depositar: ");
                scanf("%f", &valor);
                saldo += valor;
                break;

            case 3:
                printf("Valor para sacar: ");
                scanf("%f", &valor);

                if(valor <= saldo)
                    saldo -= valor;
                else
                    printf("Saldo insuficiente!\n");
                break;

            case 4:
                printf("Valor do emprestimo: ");
                scanf("%f", &valor);
                emprestimo += valor;
                saldo += valor;
                break;

            case 5:
                printf("Valor para pagar: ");
                scanf("%f", &valor);

                if(valor <= saldo) {
                    saldo -= valor;
                    emprestimo -= valor;
                }
                break;

            case 6:
                printf("Emprestimo: R$ %.2f\n", emprestimo);
                break;

            case 7:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while(opcao != 7);
}
