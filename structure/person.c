#include<stdio.h>
#include<string.h>
int main(){
    struct person{
        char name[50];
        int salary;
        float ages;
    }a,b,c;
    a.salary=200000;
    a.ages=22.5;
    strcpy(a.name,"ram");
     b.salary=100000;
    b.ages=20.5;
    strcpy(b.name,"shyam");
printf("%s\n",a.name);
printf("%f",b.ages);
return 0;
}