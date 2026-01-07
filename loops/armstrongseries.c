#include<stdio.h>
int main(){
    
     int num,originalnum,remainder,result,n;
     printf("the armstrong number between 1 and 1000 are: \n");
     for(int i=1;i<=1000;i++){
        originalnum=num;
        n=0;
        result=0;

        int temp=originalnum;
        while(temp!=0){
            temp/=10;
            ++n;}
            temp=originalnum;
            while(temp!=0){
           remainder=temp%10;
            result=result+remainder*remainder*remainder;
            temp=temp/10;
        }
    
        if(result==originalnum){
            printf("%d",originalnum);
        }
    }
      printf("the armstrong number between 1 and 1000 are: \n");
  printf("\n");
        return 0 ;
     }