#include <stdio.h>

int main()
{
    double balance = 0.0;
    int option = 0;

    do
    {
        printf("===== COFRINHO DIGITAL ===== \n\nSaldo atual: R$ %.2lf \n1 - Adicionar R$ 0,50 \n2 - Adicionar R$ 1,00 \n3 - Adicionar R$ 2,00 \n0 - Encerrar \nEscolha uma opção: ", balance);
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            balance += 0.50;
            break;
        case 2:
            balance += 1.00;
            break;
        case 3:
            balance += 2.00;
            break;
        case 0:
            printf("Saldo atual: R$ %.2lf \nPrograma encerrado!", balance);
            break;
        default:
            printf("Opção inválida.");
        }
    } while (option != 0);

    return 0;
}