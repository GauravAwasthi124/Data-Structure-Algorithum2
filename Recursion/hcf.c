#include<stdio.h>
int hcf(int a,int b);
int main()
{
    int number1,number2;
    printf("Enter the first and second number\n");
    scanf("%d %d",&number1,&number2);   
    int number = hcf(number1,number2); 
    printf("%d\n", number);
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