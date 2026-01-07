#include<stdio.h>
#include<limits.h>
int main(){
    int arr[9]={12,48,4,8,98,56,87,45,20};
    for(int i=0;i<9;i++){
        int min =INT_MAX;
        int minidx=-1;
        for(int j=i;j<9;j++){
            if(min>arr[j]){
            min=arr[j];
            minidx=j;
            }
        }
          int temp=arr[minidx];
            arr[minidx]=arr[i];
            arr[i]=temp;
    }
    for(int i=0;i<9;i++){
        printf("%d ",arr[i]);
    }
     return 0;
}