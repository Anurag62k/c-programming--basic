/*#include<stdio.h>
int main(){
    int a,b,c;
    float avg;
    printf("enter 3  no");
    scanf(" %d %d %d",&a,&b,&c);
    printf("average is =% 2f",(a+b+c)/3.0);
    return 0;
}*/
#include<stdio.h>
#define PI 3.1416
int main(){
    float r,h,volume;
    printf("enter r ,h");
    scanf("%f %f",&r,&h);
    volume= PI*r*r*h;
    printf("volume is =%3f",volume);
    return 0 ;
    
    
}