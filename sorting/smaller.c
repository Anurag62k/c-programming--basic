#include<stdio.h>
#include<limits.h>
int main(){
    int arr[8]={1,2,3,5,12,6,7,8};
    int k;
    printf("enter k");
    scanf("%d",&k);
    for(int i=0;i<9;i++){
   int min =INT_MAX;
        int minidx=-1;
        for(int j=i;j<8;j++){
            if(min>arr[j]){
            min=arr[j];
            minidx=j;
            }
        }
          int temp=arr[minidx];
            arr[minidx]=arr[i];
            arr[i]=temp;
    }
  printf("%d ",arr[k-1]);
    return 0;
}