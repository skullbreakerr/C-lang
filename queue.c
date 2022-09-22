#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int MAX = 10, q[10], front = -1, rear = -1;

void insert();
void delet();
void display();

int main()
{
    int ch;

    printf("\nQueue operations\n");
    printf("1.insert\n2.delete\n3.display\n4.exit\n");
    while (1)
    {
        printf("Enter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            delet();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid option\n");
        }
    }

    getch();
    return 0;
}

void insert()
{
    int x;
    if (rear == MAX - 1)
        printf("Queue is overflow\n");
    else
    {
        if (front == -1)
            front = 0;
        printf("Enter element to be insert:");
        scanf("%d", &x);
        rear = rear + 1;
        q[rear] = x;
    }
}

void delet()
{
    int a;
    if ((front == -1) && (rear == -1))
    {
        printf("Queue is underflow\n");
    }
    a = q[front];
    front = front + 1;
    printf("Deleted element is:%d\n", a);
    if (front > rear)
    {
        front = -1;
        rear = -1;
    }
}

void display()
{
    int i;
    if (front == -1 && rear == -1)
    {
        printf("Queue is underflow\n");
    }
    for (i = front; i <= rear; i++)
    {
        printf("\t%d", q[i]);
        printf("\n");
    }
    getch();
}