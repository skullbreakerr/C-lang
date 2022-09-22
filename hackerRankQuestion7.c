#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    
        char *s=(char*)malloc(sizeof(char)*1024); 
        scanf("%[^\n]",s);
        int arr[10]={0};
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]>='0'&&s[i]<='9')
            {
                arr[s[i]-48]++; //dbt//           
            }
        }
        for(int i=0;i<10;i++)
            printf("%d ",arr[i]);
        return 0;
    // char *s;
    // int arr[10];
    // s = malloc(1024 * sizeof(char));
    // scanf("%[^\n]", s);
    // s = realloc(s, strlen(s) + 1);
    // for (int i=0; i<10-1;i++) {
    //    arr[i]=0;
    // }
    // for (int i = 0; i < strlen(s); i++)
    // {
        
        // if (s[i]==0)
        // {
        //     int cnt=0;
        //     cnt++;
        // }if (s[i]==1)
        // {
        //     int cnt=0;
        //     cnt++;
        // }
        // if (s[i]==2)
        // {
        //     int cnt=0;
        //     cnt++;
        // }
        // if (s[i]==3)
        // {
        //     int cnt=0;
        //     cnt++;
        // }
        // if (s[i]==4)
        // {
        //     int cnt=0;
        //     cnt++;
        // }
        // if (s[i]==5)
        // {
        //     int cnt=0;
        //     cnt++;
        // }
        // if (s[i]==6)
        // {
        //     int cnt=0;
        //     cnt++;
        // }
        // if (s[i]==7)
        // {
        //     int cnt=0;
        //     cnt++;
        // }
        // if (s[i]==8)
        // {
        //     int cnt=0;
        //     cnt++;
        // }
        // if (s[i]==9)
        // {
        //     int cnt=0;
        //     cnt++;
        // }
        
        
    //    switch (s[i])
    //   {
    //     case 0:
    //       arr[0]=arr[0]+1;
    //      break;
    //     case 1:
    //       arr[1]=arr[1]+1;
    //       break;
    //     case 2:
    //       arr[2]=arr[2]+1;
    //       break;
    //     case 3:
    //       arr[3]=arr[3]+1;
    //       break;
    //     case 4:
    //       arr[4]=arr[4]+1;
    //       break;
    //     case 5:
    //       arr[5]=arr[5]+1;
    //       break;
    //     case 6:
    //       arr[6]=arr[6]+1;
    //       break;        
    //     case 7:
    //       arr[7]=arr[7]+1;
    //       break;        
    //     case 8:
    //       arr[8]=arr[8]+1;
    //       break;        
    //     case 9:
    //       arr[9]=arr[9]+1;
    //       break;        
    //     default:
    //       break;          
    //   }    

    // }

    // for (int i = 0; i < 10-1; i++)
    // {
    //     printf("%d ",arr[i]);
    // }
    
    
    // return 0;   
}
