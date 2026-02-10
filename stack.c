// Stack implementation in C using Array.
// Stack is LIFO ( Last In, First Out).
#include <stdio.h>

// MAXSIZE is used to defined the size of stack.
// top is use to track the position in the stack.
#define MAXSIZE 10
int stack[MAXSIZE], top = -1;

void push();
void display();
void pop();

int main()
{
    int choice;

    do
    {
        printf("\n --------------Stack-------------------");
        printf("\n 1.Push \n 2.Pop \n 3.Display \n 4.Exit");
        printf("\n --------------------------------------");
        printf("\n Enter your Choice :\t");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default:
            printf("\n Invalid Choice , Please Enter Again");
            break;
        }
    } while (choice != 4);

    return 0;
}

void push()
{
    int n;
    // (top  == MAXSIZE - 1), because array start with 0. so, MAXSIZE -1 is the last place.
    if (top == MAXSIZE - 1)
    {
        printf("\n Stack is overflow");
    }
    else
    {
        printf("\n Enter the item :\t");
        scanf("%d", &n);
        top++;
        stack[top] = n;
    }
}
void display()
{
    int i;
    if (top == -1)
    {
        printf("\n The Stack is empty");
    }
    else
    {
        printf("\n The item is diplayed below :");
        for (i = top; i >= 0; i--)
        {
            printf("\n %d", stack[i]);
        }
    }
}

void pop()
{
    int n;
    if (top == -1)
    {
        printf("\n The Stack is empty");
    }
    else
    {
        n = stack[top];
        top--;
        printf("\n The pop item is %d", n);
    }
}