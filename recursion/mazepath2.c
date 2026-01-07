#include<stdio.h>
int path(int n,int m){
    int rightways=0;
    int downways=0;
    if(n==1 && m==1) return 1;
    if(n==1){
        rightways+=path(n,m-1); 
    }
    if(m==1){
        downways+=path(n-1,m);
    }
    if(n>1 && m>1){
        rightways+=path(n,m-1); 
          downways+=path(n-1,m);
    }
   
   int totalways=rightways+downways;
    return totalways;
}
int main(){
    int n;
    printf("enter row ");
    scanf("%d",&n);
    int m;
    printf("enter column ");
    scanf("%d",&m);
    int maze= path(n,m);
    printf("%d",maze); 
    return 0;
}