#include<stdio.h>
int zigzag(int n){
if(n==0) return 0;
printf("%d",n);
zigzag(n-1);
printf("%d",n);
zigzag(n-1);
printf("%d",n);
return 0;
}
int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    int zig=zigzag(n);
    scanf("%d",zig);
    return 0;
}