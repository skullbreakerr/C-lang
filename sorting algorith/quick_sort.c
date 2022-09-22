#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int quk_srt();
void display();
void divide();

int main(){
    int n;
    printf("!! QUICK SORT !!\n\n");
    printf("\nEnter the capacity of array[0-10]: ");
    scanf("%d",&n);

    int arr[n];
    printf("\nEnter the data: ");
    while (n--)
    {
        scanf("%d",arr[n]);
    }
    for (int i = 0; i < n-1; i++)
    {
        printf("%d",arr[i]);
    }
    
    
}

 