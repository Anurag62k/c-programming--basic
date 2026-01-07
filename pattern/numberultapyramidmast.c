#include<stdio.h>
int main(){
 int n;
 printf("enter number of rows");
 scanf("%d",&n);
 int nst=n;
 int nsp=1;
 int a=1;
 for(int i=1;i<=n+1;i++){
    printf("%d",i);
 }
 for(int j=n;j>=1;j--){
        printf("%d",j);
    }
    printf("\n");
    for(int i=1;i<=n;i++){
         for(int j=1;j<=nst;j++){
            printf("%d",j);
        }
        for(int j=1;j<=nsp;j++){
            printf(" ",j);
        }
         for(int j=nst;j>=1;j--){
            printf("%d",j);
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
}