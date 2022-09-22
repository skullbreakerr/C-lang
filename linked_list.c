#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void insert_begin();
void display_list();

struct node
{
    char data;
    struct node *next;
};

struct node *start = NULL;


int main()
{
    char key1;
    int key2;

    printf("\n                |     @  __   | /   |     @  __   |     __                ");
    printf("\n=~=~=~=~=~=~=~=~|     | |  |  |/    |     | (   --|--  (  =~=~=~=~=~=~=~=~");
    printf("\n                |___  | |  |  | |   |___  | __)   |__  __)                ");

    while (1)
    {
        printf("\na>Singly link list\nb>doubly link list\n0>Exit(0)\n\nEnter your requirement : ");
        scanf("%c",&key1);

        if (key1=='a')
        {
            switch (key1)
            {
            case 1:
                insert_begin();
                break;
            case 2:
                insert_end();
                break;
            case 3:
                display_list();
            break;
            // case 4:
            //     delete_list();
            //     break;
            // case 5:
            //     exit(0);
            //     break;        
            default:
                printf("\nERROR_009_selection=in=valid==key_");
                break;
            }
            
        }
        
        else if(key1=='b')
        {
            // switch (key1)
            // {
            // case 1:
            //     insert();
            //     break;
            // case 2:
            //     display();
            //     break;
            // case 3:
            //     delete();
            //     break;
            // case 4:
            //     exit(0);
            //     break;        
            // default:
            //     printf("\nERROR_009_selection=in=valid=key_");
            //     break;
            // }
        }
        
    }
    

 return 0;   
}

void insert_beg()
{
    char val;
    struct node *new_node;

    new_node = (struct node*)malloc(sizeof(struct node));

    printf("\nEnter an element : ");
    scanf("%c",&val);

    new_node->data = val ;
    new_node->next = start;
    start = NULL ;

}

void display_list()
{
    struct node *ptr;
    ptr = start;

    if (start==NULL)
    {
        printf("\nNothing to display in link list !!");
    }
    else
    {
        while (ptr!=NULL)
        {
            printf("\nElement is %c",ptr->data);
            ptr = ptr->next;
        }
        
    }
    
}