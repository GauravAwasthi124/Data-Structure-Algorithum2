#include<stdio.h>
int Binary_Search(int a[],int n,int data);
int main()
{
    int n,i,temp,data,flag,j;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i = 0; i<n-1; i++)
    {
        for ( j =0; j<n-i; j++)
        {
            if (a[j+1]<a[j])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter the data you want search\n");
    scanf("%d",&data);
    int ans=Binary_Search(a,n,data);
            if(ans==-1)
            {
                    printf("Data not found\n");
                }
                else
                {
                        printf("Data found at %d position\n",ans);
                    }
    return 0;
}
int Binary_Search(int a[],int n,int data)
{
    int i=0;
    int r = n-1;
    while (i<=r)
    {
        int mid = i+(i-r)/2;
        if (data==a[mid])
        {
            return mid;
        }
        else if (data<a[mid]){
            r = mid-1;
        }
        else if(data>a[mid])
        {
            i = mid+1;
        }
        else
        {
            printf("Data not found");   
        }
        
    }
       return -1;
}