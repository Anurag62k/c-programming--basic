#include<stdio.h>
int main(){
 int n;
 printf("enter number of rows");
 scanf("%d",&n);
 int nst=n;
 int nsp=0;
 for(int i=1;i<=2*n+1;i++){
   printf("*");
 }
 for(int i=1; i<=n;i++){
    for(int j=1;j<=nst;j++){
    printf("*");
    }
    for(int k=1;k<=nsp;k++){
      printf(" ");
    }
    for(int j=1;j<=nst;j++){
    printf("*");
    }
    nst-=1;
    nsp+=2;
    printf("\n");
   }
   return 0;
}

