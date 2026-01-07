#include<stdio.h>
int main(){
    float n;
    printf("enter n");
    scanf("%f",&n);
    float a=100;
    for(int i=1;i<=n;i=i+1){
        printf("%f ",a);
        a=a*(0.5);
    }
    return 0 ;
}