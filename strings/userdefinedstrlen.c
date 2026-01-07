#include<stdio.h>
int mystrlen(char source[]){
    int i=0;
    int count=0;
    while(source[i]!=0){
    count++;
    i++;
    }
    return count;
}
int main(){
      int count=0;
    char source[100];
  
    printf("enter string:");
    gets(source);
   mystrlen(source);
    printf("length of string:%d",mystrlen(source));
    return 0;
}