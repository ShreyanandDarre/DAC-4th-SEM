#include <stdio.h>
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int num;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);
    int result = factorial(num);
    FILE *outputFile = fopen("factorial_output.txt", "w");
    if (outputFile == NULL)
    {
        printf("Error: Unable to open factorial_output.txt for writing.\n");
        return 1;
    }
    fprintf(outputFile, "Factorial of %d is %d.\n", num, result);
    fclose(outputFile);
    return 0;
}
