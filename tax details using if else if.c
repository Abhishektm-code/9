#include <stdio.h>

int main()
{
    float income, tax;

    printf("Enter your income: ");
    scanf("%f", &income);

    if (income <= 10000)
    {
        tax = 0;
    }
    else if (income <= 50000)
    {
        tax = (income - 10000) * 0.10;
    }
    else if (income <= 100000)
    {
        tax = 4000 + (income - 50000) * 0.20;
    }
    else
    {
        tax = 14000 + (income - 100000) * 0.30;
    }

    printf("Tax: $%.2f\n", tax);

    return 0;
