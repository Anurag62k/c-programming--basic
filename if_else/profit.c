#include<stdio.h>
int main(){
    int sp,cp,profit;
    
    printf("enter sp");
    scanf("%d",&sp);
    printf("enter cp");
    scanf("%d",&cp);
    profit=sp-cp;
    if(sp>cp){
        printf("profit");
    }
    if(cp>sp){
        printf("loss");
    }
    if(sp==cp){
        printf("neither loss nor profit");
    }
    return 0 ;

}