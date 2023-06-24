#include <stdio.h>
int partition(int a[], int beg, int end); 
void quickSort(int a[], int beg, int end); 
void main()  
{  
    int i,n;  
    printf("how many array you want to print\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    quickSort(arr, 0, n-1);  
    printf("\n The sorted array is: \n");  
    for(i=0;i<n;i++)  
    printf(" %d\t", arr[i]);  
}  
int partition(int a[], int beg, int end)
{  
    int pivot = a[beg];
    int i = beg,j;

    for ( j = i+1; j <=end; j++)
    {
        if (a[j] <=pivot){
            i=i+1;
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    int temp = a[i];
    a[i] = a[beg];
    a[beg] = temp;
    return i;
}  
void quickSort(int a[], int beg, int end)  
{  
    int loc;  
    if(beg<end)  
    {  
        loc = partition(a, beg, end);  
        quickSort(a, beg, loc-1); 
        quickSort(a, loc+1, end);  
    }  
}  