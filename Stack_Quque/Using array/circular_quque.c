#include <stdio.h>
#define MAX_SIZE 5

int queue[MAX_SIZE];
int front = -1, rear = -1;

void insert(int item);
int del();
int peek();
int isEmpty();
void display();

int main()
{
    int choice, item;

    while (1)
    {
        printf("\n1.Insert\n");
        printf("2.Delete\n");
        printf("3.Peek\n");
        printf("4.Display\n");
        printf("5.Quit\n");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter the element for insertion : ");
            scanf("%d", &item);
            insert(item);
            break;
        case 2:
            printf("\nDeleted element is %d\n", del());
            break;
        case 3:
            printf("\nItem at the front of queue is %d\n", peek());
            break;
        case 4:
            display();
            break;
        case 5:
            return 0;
        default:
            printf("\nWrong choice\n");
        }
    }
}

void insert(int item)
{
    if ((front == 0 && rear == MAX_SIZE - 1) || (front == rear + 1))
    {
        printf("\nQueue Overflow\n");
        return;
    }
    else{
        if (front == -1)
        {
            front = 0;
            rear = 0;
        }
        else
        {
            if (rear == MAX_SIZE - 1)
                rear = 0;
            else
                rear = rear + 1;
        }
        queue[rear] = item;
    }
}

int del()
{
    int item;
    if (front == -1)
    {
        printf("\nQueue Underflow\n");
        return -1;
    }
    item = queue[front];
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        if (front == MAX_SIZE - 1)
            front = 0;
        else
            front = front + 1;
    }
    return item;
}

int peek()
{
    if (front == -1)
    {
        printf("\nQueue Underflow\n");
        return -1;
    }
    return queue[front];
}

int isEmpty()
{
    if (front == -1)
        return 1;
    else
        return 0;
}

void display()
{
    int i;
    if (front == -1)
    {
        printf("\nQueue is empty\n");
        return;
    }
    printf("\nQueue is :\n");
    if (front <= rear)
    {
        for (i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
    }
    else
    {
        for (i = front; i < MAX_SIZE; i++)
        {
            printf("%d ", queue[i]);
        }
        for (i = 0; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
    }
    printf("\n");
}