#include <stdio.h>
int main() 
{
    int n, factorial = 1;
    printf("Enter a positive number: ");
    sos:
    // Checking if the input is an integer
    if (scanf("%d", &n) != 1) 
    {
        printf("Invalid input! Please enter an integer.\n");
        return 1;  // Exit the program
    }

    if (n < 0) 
    {
        printf("Please enter a positive number.\n");
        goto sos;
    } 
    else if (n == 0 || n == 1) 
    {
        factorial = 1;
        printf("The factorial of %d is : %d\n", n, factorial);
    } 
    else 
    {
        for (int i = 1; i <= n; i++) 
        {
            factorial = i * factorial;
        }
        printf("The factorial of %d is : %d\n", n, factorial);
    }
    return 0;
}