#include<stdio.h>
int power(int n, int m){
     if(m==0) return 1 ;
    if(m%2==0) {return power(n,m/2)*power(n,m/2);}
   else
   { return power(n,m/2)*power(n,m/2)*n;}
    
}
int main(){
    int n;
    printf("enter  number ");
    scanf("%d",&n);
    int m;
    printf("enter  exponent ");
    scanf("%d",&m);
    int p=power(n,m);
  printf("%d",p);
    return 0;
}