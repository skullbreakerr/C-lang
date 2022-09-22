#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int arr[10],n;

void search(){

    int el;
    printf("\n\t Enter Element to be search : ");
    scanf("%d",&el);
    int i = 0;
    for (; i < n; i++)
    {
        if (el==arr[i])
        {
            printf("\nElement found !!\n");
            printf("\nElement is -> %d \n\nIt's Address is -> %d\n",arr[i],&arr[i]);
            printf("\nElement found in %d pass.\n",i);
            break;
        }
                        
    }

    if(el!=arr[i]){
        printf("\nElement not found after completing %d passes.\n",i);
        printf("\n\tPossible Reason");
        printf("\n\ti> Array is Empty.");
        printf("\n\tii> Element you were looking,Is does'nt exist.\n");
    }
    
}
void insert(){
    printf("\n\t Enter the element : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
}
int main(){

    int key;
    printf("\n\t\tARRAY SEARCH\n");
    printf("\nDefine capacity of Array[1-10]: ");
    scanf("%d",&n);
    printf("\n\t<1> for insert all element.\n\t<2> for searching element.\n\t<3> for exit(0).\n\n");
    
    
    while (1)
    {
        printf("\nEnter your key : ");
        scanf("%d",&key);
        switch (key)
        {
          case 1 :
            insert();
            break;
          case 2 :
            search();
            break;
          case 3 :
            exit(0); 
            break;   
          default:
            printf("\nPlease enter valid key !!");
            break;  
        }    
    }
    return 0;
}