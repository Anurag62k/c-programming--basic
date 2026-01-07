#include<stdio.h>
int main(){
    char source[100],destination[200];
    printf("enter string:");
    gets(source);
   mystrcpy(destination,source);
    printf("copied string:%s",destination);
    return 0;
}
void mystrcpy(char des[],char source[]){
    int i=0;
    while(source[i]!='\0'){
        des[i]=source[i];
        i++;
        
    }
}