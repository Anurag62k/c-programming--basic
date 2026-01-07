#include<stdio.h>
int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    int lastdigit,sum=0;
    while(n!=0){
        lastdigit=n%10;
        sum=sum+lastdigit;
        n=n/10;
        
    }
    printf("the sum of digits are:%d",sum);
    return 0;
}