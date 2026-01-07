#include<stdio.h>
 void number(int n){
    if (n==0) return;
    number(n-1);
    printf("%d\n",n);
    return ;
}
int main() {
    int n;
    printf("enter n");
    scanf("%d",&n);
    number(n);
    scanf("%d",number);
    return 0;
}