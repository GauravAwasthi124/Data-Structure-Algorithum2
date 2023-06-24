#include<stdio.h>
int lcm(int x,int y);
int main()
{
    int number1,number2;
    printf("Enter the first and second number\n");
    scanf("%d %d",&number1,&number2);
    int answer = lcm(number1,number2);
    printf("%d\n", answer);
    return 0;
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