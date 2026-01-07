#include<stdio.h>
int main(){
    
     int n,sum=0,digit,c;
     printf("enter n");
     scanf("%d",&n);
     c=n;
        while(n>0){
            digit=n%10;
            sum=sum+digit*digit*digit;
            n=n/10;
        }

        if(c==sum){
            printf("the number is armstrong");
        }
        else{printf("the number is not armstrong");
        }
        return 0 ;
     }
     

