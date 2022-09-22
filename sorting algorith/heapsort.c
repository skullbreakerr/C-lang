#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 50
int size,arr[max];
void menu(){
    int key;
    printf("\n\nPress '0' for building  Heap.\nPress '1' for deleting Heap.\nPress '2' exit(0).\nPress '3' Display.\n\n==> ");
    scanf("%d",&key); 
     
    switch (key)
    {
    case 0:
         buildHeap();
        break;
    case 1:
         deleteHeap();
    case 2:
         exit(0);
    case 3:
         display();          
    default:
         printf("\n\nINVALID-Command_error_in-typo_0x8001");
        break;
    }
    
}
int buildHeap(){                                           // arr[1|2|3|44]//
 int temp;
 for (int i = 0; i < size; i++)
 {
    temp =arr[i];
    arr[size/2] = checkMaxNum(arr[i],checkMaxNum(arr[i+1],arr[i+2]));
    arr[i]=arr[size/2];
     
 } 
 printf("\n\tHEAP BUILD SUCCESSFULLY....\n\n");
 menu();            
}

void display(){
    for (int i = 0; i < size; i++)
    {
        printf("|%d ",arr[i]);
    }
    printf("|");
    menu();
}
int checkMaxNum(int a, int b){
    if(a>b) return a;
    else return b; 
}

void deleteHeap(){
    printf("working...");
    menu();
}
int main(){
     
    printf("\n\t\t--HEAP SORT--\n");
    printf("\nEnter the size of Array: ");
    scanf("%d",&size);
    arr[size];
    printf("\nEnter the elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    menu();
    return 0;
}