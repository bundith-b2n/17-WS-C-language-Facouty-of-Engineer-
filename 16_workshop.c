#include <stdio.h>
int factorial(int n)
{
    int result;
    if (n == 1)
    {
        result = 1;
    }
    else
    {
        result = n * factorial(n - 1);
    }
    return result;
}
int sum(int n)
{
    int result;
    if (n == 1)
    {
        result = 1;
    }
    else
    {
        result = n + sum(n - 1);
    }
    return result;
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
        printf("%d\t %d\t %d \n", i, factorial(i),sum(i));
    }
}