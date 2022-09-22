#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int top=-1,x;
int stack[10];

void insert();
void delete();
void display();

int main(){
    int key;

    printf("\n----STACK OPERATION----\n");
    printf("\n--CAPACITY OF YOUR STACK--\n");
    printf("\n----->> 10 <<-----\n");
    
    printf("\n1> insert\n2> delete\n3> display\n4> exit(0)\n");

    while (1)
    {
        printf("Enter your choice : ");
        scanf("%d",&key);
        switch (key)
        {
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;            
        
        default:
            printf("\nENTER_VALID---KEY_008xc0d...\n");
            break;
        }
    }

    return 0;
}

void insert(){
    if (top==10-1)
    {
        printf("\n~~STACKO@@OVER``FLOW||_08bcnnwdd\n");
    }
    else
    {
        printf("Enter the element : ");
        scanf("%d",&x);
        top=top+1;
        stack[top]= x;  
    }
    
    

}

void delete(){
if (top==-1)
{
    printf("\nNOSUCH@ELEMENTS&&TO^|DELETE_08bcxxsdd\n");
}
else
{
    printf("\n%d element is deleted \n",top);
    top = top-1;
}

    
}

void display(){
    int i=0;
   if (top==-1)
    {
        printf("\nNOSUCH@ELEMENTS&&TO^|DISPLAY_08bcycysdd\n");
    }
    else
    {
        for (int i = top; i >=0 ; --i)
        {
            printf("\n%d element is %d\n",i,stack[i]);
        }
        
    }
    
    
    
}