#include<stdio.h>
int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    printf("fibonacci number is:1\n");
        printf("fibonacci number is:1\n");
    int sum=1,a=1,f=1;
    for(int i=1;i<=n-2;i++){
       
        sum=f+a;
        a=f;
        f=sum;
        printf("fibonacci number is :%d\n",sum);
    }
    return 0 ;
}