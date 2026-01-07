#include<stdio.h>
int factorial(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){

    factorial=factorial*i;
         printf("factorial is:%d\n",factorial);
    }
     
    return factorial;
}
int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    factorial(n);
    return 0 ;
}