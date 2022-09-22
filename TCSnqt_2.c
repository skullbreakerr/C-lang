#include<stdio.h>
#include<conio.h>
void display();
int arr[10],temp,n=5;
int main(){
    int max=5;
    for (int i = 0; i < max; i++)
    {
        scanf("%d",&arr[i]);
        
    }
    for (int i = 0; i < max; i++)
    {
        if (arr[i]=='0')
        {
            arr[n]=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=arr[i+2];
            n--;
        }
        
    }
    

    display();
    return 0;
}

void display(){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}