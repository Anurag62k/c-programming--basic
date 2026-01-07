#include<stdio.h>
int main(){
    int n;
    int num1=0,num2=0;
    printf("enter n");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array");
     for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
     }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
    }
    printf("\n");
     for(int i=0;i<n;i++){
        num1=num1*10+arr[i];
     }
    printf("%d ",num1);
printf("\n");
if(n>=2){
    int temp=arr[n-2];
    arr[n-2]=arr[n-1];
    arr[n-1]=temp;
        }
 for(int i=0;i<n;i++){
    printf("%d ",arr[i]);}
  for(int i=0;i<n;i++){
        num2=num2*10+arr[i];
         }
printf("%d ",num2);
printf("\n");
printf("sum is :%d",num1+num2);
return 0;
}
