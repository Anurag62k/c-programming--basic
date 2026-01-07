#include<stdio.h>
int tower(int n,char s,char h,char d){
if(n==0) return 0;
tower(n-1,s,d,h);
printf("%c->%c\n",s,d);
tower(n-1,h,s,d);
return 0;
}
int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    int hanoi=tower(n,'A','B','C');
    scanf("%d",hanoi);
    return 0;
}