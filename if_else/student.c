#include<stdio.h>
int main(){
    int a;
    printf("enter a");
    scanf("%d",&a);
    if (a>90 && a<100){
        printf("excellent");
    }
    else if (a>80 && a<90){
        printf("very good");
    }
 return 0 ;   
}