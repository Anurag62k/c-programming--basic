#include<stdio.h>
#include<string.h>
int main(){
   typedef struct cricketer{
    char firstname[20];
    char lastname[20];
    int age;
    int matches;
    float averages;
}cricketer;
cricketer arr[3];

    for(int i=0;i<3;i++){
        scanf("%[^\n]s",arr[i].firstname,arr[i].lastname);
          scanf("%d",&arr[i].age);        
            scanf("%d",&arr[i].matches);           
              scanf("%f",&arr[i].averages);             
    }
    for(int i=0;i<3;i++){
          printf("NAME: ",arr[i].firstname,arr[i].lastname);
          printf("age:",arr[i].age);
           printf("matches:",arr[i].matches);
           printf("average:",arr[i].averages);}
    
    return 0;
}