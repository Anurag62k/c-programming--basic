#include<stdio.h>
void swap(int*x,int*y){
int temp;
temp=*x;
*x=*y;
*y=temp;
return;
}
int main(){
    int a,b;
    printf("enter a,b");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("after swapping the number is:%d %d",a,b);
    return 0;
}