#include<stdio.h>
int fibonacci(int n){
    if(n==1 || n==2) return 1;
    int recAns=fibonacci(n-1)+fibonacci(n-2);
    return recAns;
}
int main(){
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    int fib= fibonacci(n);
    printf("%d",fib);
    return 0;
}