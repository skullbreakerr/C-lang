#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insert_end();
void insert_beg();
void display();
struct node
{
    int data;
    struct node *next; 
};

struct node *Start = NULL;

                 
int main()
{
  int key;      

    printf("->Link->List->\n1>insert at end\n2>insert at begining\n3>display\n>4>exit\n");

    while (1)
    {
        printf("\nEnter your requirement : ");
        scanf("%d",&key);

        switch (key)
        {
        case 1:
            insert_end();
            break;
        case 2:
            insert_beg();
            break;
        case 3:
            display();    
            break;
        case  4:
            exit(0);    
            break;
        default:
            printf("\nERROR_008--selecting==key--mistakes=._");
            break;
        }
    }
         
  return 0 ; 
               
}


void insert_end()
{
  struct node *new_node,*temp;
  int val;

  new_node=(struct node *)malloc(sizeof(struct node));

  printf("\nEnter the element to be inserted : ");
  scanf("%d",&val);

  new_node->data=val;
  new_node->next=Start;

  temp=Start;
  if (temp==NULL)
  {
      Start=new_node;
  }
  else
  {
      while (temp->next!=NULL)
      {
          temp=temp->next;
      }temp->next=new_node;
      
  }

}

void insert_beg()
{
    struct node *new_node;
    int x;
 
    new_node = (struct node*)malloc(sizeof(struct node));
 
    printf("\nEnter an element : ");
    scanf("%d",&x);
 
    new_node->data = x ;
    new_node->next = Start;
    Start=new_node;

}