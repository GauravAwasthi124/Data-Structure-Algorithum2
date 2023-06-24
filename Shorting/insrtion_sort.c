#include<stdio.h>
int main()
{
    int n, i, j, temp;
    printf("Enter the element you want to print\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the element of an array\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    for (i = 1; i < n; i++) 
    {
        j = i;
        while (j > 0 && a[j - 1] > a[j]) 
        {
            temp = a[j];
            a[j] = a[j - 1];
            a[j - 1] = temp;
            j--;
        }
    }
    printf("Answer\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
    return 0;
}