#include<stdio.h>
int factorial(int n);

int main()
{
    printf("Press 1 for Factorial\nPress 2 for Fibonacci\n");
    int number;
    printf("Enter the number:\n");
    scanf("%d",&number);
    int answer= fibonacci(number);
    printf("%d\n", answer);
    return 0;
}
int factorial(int n)
{
    if (n ==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}

