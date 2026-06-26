#include <stdio.h>
#include <stdlib.h>

void main()
{
    int opcao;
    float saldo = 1000.00;
    float emprestimo = 0.00;
    float valor;

    do
    {
        printf("\n===== CAIXA ELETRONICO =====\n");
        printf("1 - Verificar saldo\n");
        printf("2 - Depositar valor\n");
        printf("3 - Sacar valor\n");
        printf("4 - Pedir emprestimo\n");
        printf("5 - Pagar emprestimo\n");
        printf("6 - Consultar emprestimo\n");
        printf("7 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:
                printf("Saldo: R$ %.2f\n", saldo);
                break;

            case 2:
                printf("Valor do deposito: ");
                scanf("%f", &valor);
                saldo = saldo + valor;
                printf("Deposito realizado!\n");
                break;

            case 3:
                printf("Valor do saque: ");
                scanf("%f", &valor);

                if(valor <= saldo)
                {
                    saldo = saldo - valor;
                    printf("Saque realizado!\n");
                }
                else
                {
                    printf("Saldo insuficiente!\n");
                }
                break;

            case 4:
                printf("Valor do emprestimo: ");
                scanf("%f", &valor);
                saldo = saldo + valor;
                emprestimo = emprestimo + valor;
                printf("Emprestimo realizado!\n");
                break;

            case 5:
                printf("Valor para pagar: ");
                scanf("%f", &valor);

                if(valor <= saldo && valor <= emprestimo)
                {
                    saldo = saldo - valor;
                    emprestimo = emprestimo - valor;
                    printf("Pagamento realizado!\n");
                }
                else
                {
                    printf("Valor invalido!\n");
                }
                break;

            case 6:
                printf("Emprestimo atual: R$ %.2f\n", emprestimo);
                break;

            case 7:
                printf("Programa encerrado!\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while(opcao != 7);
}
