#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,n;
    scanf("%d",&num);
    int arr[num];
    n=num;
    while (n--) {
    scanf("%d ",&arr[n]);
    }
    
    for (int i=0; i<num; i++) {
       printf("%d ",arr[i]);
    }
     
    return 0;
}