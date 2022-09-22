#include<stdio.h>
#include<conio.h>

int arr[10],n;

void print_arr(){
    for (int i = 0; i < n; i++)
    {
        printf("| %d ",arr[i]);
    }
    printf("| \n");
}
void sel_sort(){

    int temp,min;
    for (int i = 0; i < n-1; i++)
    {
        min=i;
        for (int j=i+1 ; j < n; j++)
        {
            if (arr[j]<arr[min])
            {
                min=j;
            }
        
            temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
            
        }
        
    }
    
}

int main(){
    
    printf("\n\t SELECTION SORT \n\n");
    printf("Define capacity of Array(1-10) : ");
    scanf("%d",&n);
    printf("\n\nEnter the elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    print_arr();
    printf("\nSorted Array :\n\n");
    sel_sort();
    print_arr();

    return 0;
}