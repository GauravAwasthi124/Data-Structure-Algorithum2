#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define CAPACITY 10000
struct stack 
{
    int data;
    struct stack *next;
} *top;

int size = 0;
void push(int element);
int  pop();
int display();
int main()
{
    int choice, data;
    while(1)
    {
        printf("\n1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) 
        {
            case 1: 
                printf("Enter data to push into stack: ");
                scanf("%d", &data);
                push(data);
                break;
            case 2: 
                data = pop();
                if (data != INT_MIN)
                    printf("Data => %d\n", data);
                break;
            case 3: 
                display();
                break;
            case 4: 
                printf("Exiting from app.\n");
                exit(0);
                break;
            default: 
                printf("Invalid choice, please try again.\n");
        }
    }


    return 0;
}

void push(int element)
{
    if (size >= CAPACITY)
    {
        printf("Stack Overflow\n");
        return;
    }
    struct stack * newNode = (struct stack *) malloc(sizeof(struct stack));
    newNode->data = element;
    newNode->next = top;        
    top = newNode;
    size++;
}
int display()
{
    if (top == NULL)
    {
        printf("Stack is empty");
    }
    else
    {
        for (int i =top; i>=1; i--)
        {
            printf("%d ",top->data);
            top=top->next;
        }
        
    }
    
}
int pop()
{
    int data = 0;
    struct stack * topNode;
    if (size <= 0 || !top)
    {
        printf("Stack is empty.\n");
        return INT_MIN;
    }
    topNode = top;
    data = top->data;
    top = top->next;
    free(topNode);
    size--;

    return data;
}