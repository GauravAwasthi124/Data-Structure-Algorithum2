#include<stdio.h>
int fibonacci(int m);
int main()
{
    int number;
    printf("Enter the number\n");
    scanf("%d",&number);
    int answer= fibonacci(number);
    printf("%d\n", answer);
    return 0;
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