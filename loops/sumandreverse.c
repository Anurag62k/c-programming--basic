#include<stdio.h>
int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    int lastdigit,sum=0,r=0;
    while(n!=0){
        
        lastdigit=n%10;
        sum=sum+lastdigit;
        r=r*10;

        r=r+lastdigit;
        n=n/10;

    }
    printf("the sum and reverse are :%d %d", sum,r);
    return 0 ;
}