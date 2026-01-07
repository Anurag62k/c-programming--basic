#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    printf("enter string");
     fgets(str,50,stdin);
     //convert first character to uppercase
     if(str[0]>='a'&& str[0]<='z'){
        str[0]=str[0]-32;
     }
     //convert character after space to uppercase
    for(int i=1;str[i]!='\0';i++){
        if(str[i-1]==' '&& str[i]>='a'&&str[i]<='z'){
        str[i]=str[i]-32;
    }
}
    printf("uppercase is:%s",str);
    return 0;
}