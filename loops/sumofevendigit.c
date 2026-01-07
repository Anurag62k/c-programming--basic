#include<stdio.h>
int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    int digit,sum=0;
    
    while(n!=0){
        digit=n%10;
        if(digit%2==0){
            sum=sum+digit;
            
          
        }

         n=n/10;
    }
    printf("the sum of even digit is:%d",sum);
        return 0 ;
} 