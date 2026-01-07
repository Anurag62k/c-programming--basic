#include<stdio.h>
int main(){
    int a,b,area,perimeter;
    printf("enter a");
    scanf("%d",&a);
     printf("enter b");
    scanf("%d",&b);
    area=a*b;
    perimeter=2*(a+b);
    if(area>perimeter){
        printf("area");
    }
    else{
        printf("perimeter");
    }
    return 0 ; 
}