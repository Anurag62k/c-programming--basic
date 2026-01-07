#include<stdio.h>
#include<string.h>
int main(){
    char str1[]="college walllah";
   int size=0;
   int i=0;
while(str1[i]!='\0'){
size++;
i++;
}  
char str2[size];
for(int i=0;i<size;i++){
 str2[i]=str1[i];
}
printf("%s",str2);
  return 0;
}