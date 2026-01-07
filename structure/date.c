#include<stdio.h>
#include<string.h>
typedef struct students{
       char name[20];
       int roll;
       char department[20];
       char course[20];
       int yearofjoining;
    }s;
void check(s s1,s s2){
    if(strcmp(s1.department,s2.department)==0) printf("same depatment");
return ;}

int main(){
    s arr[2];
    int i=0;
    
    for(int i=0;i<2;i++){
    scanf("%c",&arr[i].name);
      scanf("%d",&arr[i].roll);
    scanf("%c",&arr[i].department);
    scanf("%c",&arr[i].course);
    scanf("%d",&arr[i].yearofjoining);
    }
    
    check(arr[0],arr[1]);
    return 0;
}