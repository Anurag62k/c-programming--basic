#include<stdio.h>
int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    printf("no of digits are:%d",count);
    return 0;
}
