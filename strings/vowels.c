#include<stdio.h>
#include<string.h>

int main(){
char str[40];
int count=0;
printf("enter the string");
gets(str);
for(int i=0;str[i]!=0;i++){
    if(strchr("aeiouAEIOU",str[i])){
        count++;
    }
}
printf("no of vowels are:%d",count);
return 0;
}