#include<stdio.h>
int main(){
    int arr[8]={9,8,500,6,5,4,3,2};
    for(int j=0;j<8;j++){
    for(int i=0;i<8-1-j;i++){
        if(arr[i]< arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
}
    for(int i=0;i<8;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}