#include<stdio.h>
int stair(int n){
    if(n<=2 ) return n;
    int recAns=stair(n-1)+stair(n-2);
    return recAns;
}
int main(){
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    int st= stair(n);
    printf("%d",st);
    return 0;
}