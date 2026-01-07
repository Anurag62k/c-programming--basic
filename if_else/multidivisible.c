#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a");
    scanf("%d",&a);
     printf("enter b");
    scanf("%d",&b);
     printf("enter c");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("%d",a);
    }
    if (b>a && b>c){
        printf("%d",b);
    }
    if (c>a && b<c){
        printf("%d",c);
    }
    return 0 ;
}