#include<stdio.h>
int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    int count,digit,sum;
    while(n!=0){
        n=n/10;
        count++;
        digit=n%10;
        if(digit%2==0){
            sum=sum+digit;
        }
    }
    printf("the sum is:%d",sum);
    return 0;
}