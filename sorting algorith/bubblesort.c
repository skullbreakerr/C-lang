#include<stdio.h>
#include<conio.h>
int arr[10],n;
void bub_sort(){
    int temp,i,j;

    for ( i = 0; i < n-1; i++)
    {
        for ( j = 0; j < n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
        
    }
    
}

void print_arr(){
    for (int i = 0; i < n; i++)
    {
        printf("| %d ",arr[i]);
    }
    printf("|\n");
}

int main(){
    
    printf("\n\t BUBBLE SORT\n\n");
    printf("Define capacity of Array(1-10) : ");
    scanf("%d",&n);
    printf("\n\nEnter the elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    print_arr();
    printf("\nSorted Array :\n\n");
    bub_sort();
    print_arr();

    return 0;
}