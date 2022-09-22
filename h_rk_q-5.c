#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    int i,j;
    scanf("%d", &n);
    int m[2*n-1][2*n-1];
    int k=2;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            m[i][j]=(n-i)>(n-j)?(n-i):(n-j);
        }
        int k=j-2;
        for(j=n;j<2*n-1;j++){
            
            m[i][j]=m[i][k--];
        }
       
        
    }
    int f=2;
    for(i=n;i<2*n-1;i++){
        
        for(j=0;j<2*n-1;j++){
            m[i][j]=m[i-f][j];
            
                
        }
        f+=2;
    }
   
    for(i=0;i<2*n-1;i++){
        for(j=0;j<2*n-1;j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
  
    return 0;
}