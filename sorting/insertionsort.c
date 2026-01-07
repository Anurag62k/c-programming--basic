#include<stdio.h>
int main(){
    int arr[8]={25,58,78,98,56,42,12,85};
    for(int i=1;i<=8;i++){
        int j =i;
        while(j>=1&&arr[j]<arr[j-1]){
            
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
               j-- ;
            
        
        }
    }
    for(int i=0;i<8;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}