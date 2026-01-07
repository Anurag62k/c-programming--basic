#include<stdio.h>
int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    /*int a=4;
    for(int i=1;i<=n;i=i+1){
        
        printf("%d\n",a);
        a=a+3;
    }*/
   for(int i=4;i<=3*n+1;i=i+3){
    printf("%d\n",i);
   }
    return 0 ;
}