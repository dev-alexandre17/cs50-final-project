#include <stdio.h>

void sum(int a, int b) 
{
    printf("Soma: %d", (a + b));
}

void subtraction(int a, int b)
{
    printf("Subtracao: %d", (a - b));
}

void multiplication(int a, int b)
{
    printf("Multiplicacao: %d", (a * b));
}

void division(int a, int b)
{
    printf("Divisao: %d", (a / b));
}

int main (void)
{

    int x, y, opt;

    printf("===============================\n");
    printf("Escolha a operacao a seguir: \n");
    printf("===============================\n");
    printf("1 - Sum\n");
    printf("2 - Subtraction\n");
    printf("3 - Multiplication\n");
    printf("4 - Division\n");
    printf("===============================\n");
    printf("Opcao: ");
    scanf("%d", &opt);
    printf("");

    printf("Valor X: ");
    scanf("%d", &x);
    printf("Valor Y: ");
    scanf("%d", &y);

    printf("");

    switch (opt)
    {
        case 1:
            sum(x, y);
            break;

        case 2:
            subtraction(x, y);
            break;

        case 3:
            multiplication(x, y);
            break;

        case 4:
            division(x, y);
            break;
        
        default:
            printf("Erro. Tente novamente mais tarde.");
            break;
    }
}