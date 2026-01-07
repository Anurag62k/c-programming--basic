#include<stdio.h>
int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    int reverse=0,lastdigit;
    while(n!=0){
        
        lastdigit=n%10;
        
         reverse=reverse*10;
        reverse=reverse+lastdigit;
       
        n=n/10;
    }
    printf("reverse of a no is:%d",reverse);
    return 0 ;
}