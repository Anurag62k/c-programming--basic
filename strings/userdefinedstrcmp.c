#include<stdio.h>
int main(){
    char str1[100],str2[200];
    printf("enter string1:");
    gets(str1);
     printf("enter string2:");
    gets(str2);
   int result= mystrcmp(str2,str1);
   if(result==0)printf("strings are equal");
   else if(result==1)printf("str1 is greater than str2");
   else printf("str2 is greater than str1");
    return 0;
}
int mystrcmp(char str1[],char str2[]){
    int i=0;
    while(str1[i]!=0 ||str2[i]!=0){
        if(str1[i]>str2[i]) return 1;
      else  if(str2[i]>str1[i])return -1;
      else return 0;
i++;
    }
    return 0;
   
}