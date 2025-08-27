// Queue implementation in C usign Array.
// Queue is FIFO (First In, First Out).

#include <stdio.h>

#define MAXSIZE 10
int queue[MAXSIZE], front = 0, rear = -1;

void insert();
void delete_item();
void display();

int main()
{

    int choice;
    do
    {
        printf("\n ----------------Queue---------------");
        printf("\n 1. Insert \n 2. Delete \n 3. Display \n 4. Exit");
        printf("\n ------------------------------------");
        printf("\n Enter the Choice :\t");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete_item();
            break;
        case 3:
            display();
            break;
        case 4:
            break;    
        default:
            printf("\n Invalid Choice, Enter Again :");
            break;
        }
    } while (choice != 4);
    return 0;
}

void insert()
{
    int n;
    if (rear == MAXSIZE - 1)
    {
        printf("\n Queue is Overflow:");
    }
    else
    {
        printf("\n Enter the item :\t");
        scanf("%d", &n);
        rear++;
        queue[rear] = n;
    }
}

void delete_item()
{
    int n;
    if (front > rear)
    {
        printf("\n Queue is Empty");
    }
    else
    {
        n = queue[front];
        front++;
        printf("\n %d item is deleted", n);
    }
}

void display()
{
    int i;
    if (front > rear)
    {
        printf("\n Queue is Empty");
    }
    else
    {
        printf("\n The items of queue are diplayed below:");
        for (i = rear; i >= front; i--)
        {
            printf("\n %d", queue[i]);
        }
    }
}