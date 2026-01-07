#include<stdio.h>
int power(int n, int m){
    if(m==0 ) return 1;
    return n*power(n,m-1);
    
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