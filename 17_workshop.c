#include <stdio.h>
void factorial(int n)
{
    int result;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            result = 1;
        }
        else
        {
            result = result * i;
        }
    }
    printf("%d", result);
}
void sum(int n)
{
    int result;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            result = 1;
        }
        else
        {
            result = result + i;
        }
    }
    printf("%d", result);
}
int main()
{
    printf("Program calulate series of factorial and sum\n");
    int n;
    do
    {
        printf("Please enter a number(1-10):");
        scanf("%d", &n);
    } while (n < 1 || n > 10);

    for (int i = 1; i <= n; i++)
    {
        printf("%d\t", i);
        factorial(i);
        printf("\t");
        sum(i);
        printf("\n");
    }
}