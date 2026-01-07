#include<stdio.h>
void factor(int a){
         for(int i=1;i<=a;i++){
        if(a%i==0){
printf("%d\n",i);
        }    
}
            return ;
}
int main(){
   
    int a;
    printf("enter a");
    scanf("%d",&a);
    factor(a);
    
            return 0;
         
    }
