#include<stdio.h>
int hcf(int a,int b);
int lcm(int x,int y);
int factorial(int n);
int fibonacci(int m);
int main()
{
    int choice;
    printf("Press 1 for HCF of tow number\nPress 2 for LCM of two number\n");
    printf("Press 3 for Factorial of a number\nPress 4 for Fibonacci Series\n");
    scanf("%d",&choice);
    int number1,number2;
    int number;
    switch (choice)
    {
    case 1:
        printf("Enter the first and second number\n");
        scanf("%d %d",&number1,&number2);   
        int number = hcf(number1,number2); 
        printf("%d\n", number);
        break;
    case 2:
        printf("Enter the first and second number\n");
        scanf("%d %d",&number1,&number2);
        int answer = lcm(number1,number2);
        printf("%d\n", answer);
        break;
    case 3:
        printf("Enter the number:\n");
        scanf("%d",&number);
        int output= factorial(number);
        printf("%d\n", output);
        break;
    case 4:
        printf("Enter the number\n");
        scanf("%d",&number);
        int answer2= fibonacci(number);
        printf("%d\n", answer2);
        break;    
    default:
        break;
    }
    return 0;
}
int hcf(int a,int b)
{
    if (a == b)
    {
        return a;
    }
    else if (a>b)
    {
        hcf(a-b,b);
    }
    else if (a<b)
    {
        hcf(a,b-a);
    }
    else if (a==1 ||b==1)
    {
        return 1;
    }
}
int lcm(int x,int y)
{
    static int common=1;
    if (common%x==0 && common%y ==0)
    {
        return common;
    }
    common++;
    return lcm(x,y);
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
int fibonacci(int m)
{
    if (m ==1 || m ==2)
    {
        return 1;
    }
    else
    {
        return fibonacci(m-1)+fibonacci(m-2);
    }
}