#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int arr[5],n;

void ins_sort(){   // big'O notation is n^2//
    
    int temp,j;
    
    for (int i = 0; i < n; i++)  //loop//
    {
        temp = arr[i];   //transfering array element --> temp variable //
        j=i-1;           //initialising the value of j --> 0-1 =-1(for i=0)//

        while (j>=0&&arr[j]>=temp)  //loop-2// *//Comparing the temp and arr[j]--> temp<=arr[j] //*
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    
}

void print_arr(){
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("| %d ",arr[i]);
    }
    printf("| \n");
}

int main(){
    printf("\n\t INSERTTION SORT\n\n");
    printf("Define capacity of Array(1-10): ");
    scanf("%d",&n);
    printf("\nEnter the elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    print_arr();
    ins_sort();
    printf("\nSorted Array :\n");
    print_arr();
    return 0;
}