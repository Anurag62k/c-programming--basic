#include<stdio.h>
int fibonacci(int n){
    int fibonacci=1;
     int sum=1;
int a=1,f=1;
    
    for(int i=1;i<=n-2;i++){
         
    
sum=a+f;
         a=f;
         f=sum;
        
         printf("fibonacci number is:%d\n",sum);
         
    }
    return sum;
}
int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    printf("fibonacci number is 1\n");
     printf("fibonacci number is 1\n");
    fibonacci(n);
    
    return 0 ;
}