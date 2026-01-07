#include<stdio.h>
long long int factorial(int x){
    int fact=1;
for(int i=2;i<=x;i++){
    fact=fact*i;
    
}
  return fact;
}
int main(){
    int n,r;
    printf("enter n,r");
    scanf("%d %d",&n ,&r);
    
   long long int nfact=factorial(n);
   long long int rfact=factorial(r);
    long long int nrfact=factorial(n-r);
   long long int ncr=nfact/(rfact*nrfact);
    printf("ncr is:%lld",ncr);
    
    return 0;
}