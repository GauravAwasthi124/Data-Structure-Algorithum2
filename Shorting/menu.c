#include<stdio.h>
void insertion_sort();
void selection_sort();
void bubble_sort();
void quick_sort();
int partition(int a[], int beg, int end); 
void quickSort(int a[], int beg, int end);
void merge_sort();
int main()
{
    int choice;
    printf("Press 1 for Insertio sort\nPress 2 for Selection Sort\nPress 3 for bubble sort\n");
    printf("Press 4 for Quick Sort\nPress 5 for Merge sort\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        insertion_sort();
        break;
    case 2:
        selection_sort();
        break;
    case 3:
        bubble_sort();
        break;
    case 4:
        quick_sort();
        break;
    case 5:
        merge_sort();
        break;
    default:
        break;
    }
    return 0;
}
void insertion_sort()
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
}
void selection_sort()
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
}
void bubble_sort()
{
    int n,i,j,temp;
    printf("Enter the element you want print\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
      for (i = 0; i<n-1; i++)
    {
        for ( j =0; j <n-i; j++)
        {
            if (a[j+1]<a[j])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("answer\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
}
void quick_sort()
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
