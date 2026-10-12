#include <stdio.h>

int main()
{
    double monthlyConsumption = 0, average = 0, totalSum = 0;

    for (int i = 0; i < 5; i++)
    {
        do
        {
            printf("Digite o consumo mensal do morador %d em m³: ", i + 1);
            scanf("%lf", &monthlyConsumption);

            if (monthlyConsumption < 0)
            {
                printf("Consumo mensal não pode ser menor que 0. \n");
            }
        } while (monthlyConsumption < 0);

        if (monthlyConsumption > 20)
        {
            printf("Consumo acima da média. \n");
        }
        else
        {
            printf("Consumo dentro da média. \n");
        }

        totalSum += monthlyConsumption;
    }

    average = totalSum / 5.0;

    printf("Consumo médio total: %.2lf", average);

    return 0;
}