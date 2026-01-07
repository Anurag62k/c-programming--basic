#include<stdio.h>
int swap(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping numbers are:%d %d",a ,b);
    
}
int main(){
    int x,y;
    printf("enter two numbers");
    scanf("%d %d",&x,&y);
    swap(x,y);
    
    return 0;
}
