#include<stdio.h>
int main(){
    for(int i=65,j=97;i<=90,j<=123; i++,j++){
        printf("%d",i);
         
        char ch=(char)i;
        printf("%c\n",i);
          printf("%d",j);
         char c=(char)j;
        printf("%c\n",j);
    }
     return 0;
    }