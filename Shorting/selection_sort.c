#include<stdio.h>
int main()
{
    int n,i,min,temp,j;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        min = i;
        for ( j = i+1; j < n; j++)
        {
            if ( a[j] < a[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}