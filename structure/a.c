#include<stdio.h>
int main(){
    int a,b;
    printf("enter a");
    scanf("%d",&a);
     printf("enter b");
    scanf("%d",&b);
    int count=0;
    for(int i=a;i<=b;i++){
        if(i%2!=0){
         count++;
        }
       
    }
     printf("%d",count);
    return 0;
}