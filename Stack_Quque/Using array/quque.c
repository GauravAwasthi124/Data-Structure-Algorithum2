#include<stdio.h>
#define n 5
int main()
{
    int queue[n],ch=1,front=0,rear=0,i,j=1,x=n;
    printf("Queue using Array\n");
    printf("1.Insertion \n2.Deletion \n3.Display \n4.Exit\n");
    while(ch)
    {
        printf("\nEnter the Choice:\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            if(rear==x)
                printf("Queue is Full\n");
            else
            {
                printf("Enter no%d :",j++);
                scanf("%d",&queue[rear++]);
            }
            break;
        case 2:
            if(front==rear)
            {
                printf("Queue is empty\n");
            }
            else
            {
                printf("Deleted Element is %d ",queue[front++]);
                x++;
            }
            break;
        case 3:
            printf("Queue Elements are:\n ");
            if(front==rear)
                printf("Queue is Empty\n");
            else
            {
                for(i=front; i<rear; i++)
                {
                    printf("%d ",queue[i]);
                }
                break;
            default:
                printf("Wrong Choice: please see the options\n");
            }
        }
    }
    return 0;
}

