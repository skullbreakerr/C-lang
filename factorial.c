#include<stdio.h> 
#include<conio.h>           //factorial 4!= 4x3x2x1===>>RECURSIVELY!!//
int fact(int n){
   if (n==1) return n; 
   return n*fact(n-1);    
}
int main(){
    int n;
    scanf("%d",&n); 
    printf("%d",fact(n));
    return 0;
} 