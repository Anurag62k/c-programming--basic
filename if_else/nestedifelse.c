#include<stdio.h>
int main(){
    int a;
    printf("enter a");
    scanf("%d",&a);
    if(a%5==0 || a%3==0){
        if(a%15!=0){
            printf("no is divisible by 3 or 5 but not by 15");
        }
        else{
            printf("no is not divisible by 15");
        }
        }
    else{
        printf("no is not divisible");
    }
    return 0 ;
}