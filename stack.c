#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int top = -1, x, Stack[10],i;
void insert();
void delete ();
void display();
void all_insert();
void delete_all();
void change_ele();

int main()
{
    int key;

    printf("\n```````STACK OPREATION``````");

    while (1)
    {
        printf("\n1>Insert \n2>Delete \n3>Display \n4>Insert all element \n5>Delete all element \n6>change the element\n7>Exit(0)\n\nEnter your requirement : ");
        scanf("%d", &key);

        switch (key)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            all_insert();
            break;
        case 5:
            delete_all();
            break;
        case 6:
            change_ele();
            break;
        case 7:
            exit(0);
            break;    
        default:
            printf("\nERROR_found_in_selection_of_key_or/a_typing_mistake_o-0");
            break;
        }
    }

    return 0;
}

void insert()
{
    if (top == 10 - 1)
    {
        printf("\nStack is full");
    }
    else
    {
        printf("\nEnter an element you want to insert : ");
        scanf("%d", &x);

        top = top + 1; // increment the pointer in code//

        Stack[top] = x; //main code(logic)//
    }
}

void delete ()
{
    if (top == -1)
    {
        printf("\nStack is empty !");
    }
    else
    {
        printf("%d element is deleted", Stack[top]);
        top = top - 1;
    }
}

void display()
{
    if (top == -1)
    {
        printf("\nNO element to display!!!");
    }
    else
    {
        for (int i = top; i >= 0; --i)
        {
            printf("\n%d", Stack[i]);
        }
    }
}

void all_insert()
{
    if (top != -1)
    {
        printf("\nError_stack_over_flow:::insufficient_space_in_stack@");
    }
    else
    {
        // for (int i = 1; i <= 10; i++)
        // {
        //     printf("\nEnter the %d element : ", i);
        //     scanf("%d", &x);

        //     top = top + 1;
        //     Stack[top] = x;
        // } 
        int i=1;
        while (top != 10 )
        {
            printf("Enter the %d element : ",i++);
            scanf("%d",&x);
            top=top+1;
            Stack[top]=x;
        
        }
        
    }
}

void delete_all()
{
    int i = 1;

    if (top == -1)
    {
        printf("\nNO_Elements_to+delete_stack=is=empty_017_.");
    }
    else
    {
        while (top != -1)
        {
            printf("\n%d Element is deleted => %d", i++, Stack[top]);

            top = top - 1;
        }
    }
}

void change_ele()
{
    if (top-i+1 <=0) /// logic ///
    {
        printf("\nStack_underflow_#no=elements+to_change");
    }
    else
    {
        printf("\nEnter the index of the element you want to change(0-9) : ");
        scanf("%d",&i);
        printf("\nEnter the new element : ");
        scanf("%d",&x);

        Stack[top-i+1] = x;//main code//

        printf("\nNew element is inserted ");
    }
    
}