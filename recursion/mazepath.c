#include<stdio.h>
int path(int cr,int cc,int er,int ec){
    int rightways=0;
    int downways=0;
    if(cc==ec&& cr==er) return 1;
  
    if(cc==ec)  {
        downways+= path(cr+1,cc,er,ec);
    }
     if(cr==er)   {
        rightways+=   path(cr,cc+1,er,ec);
   }
   if(cr<er && cc<ec){
    downways+=path(cr+1,cc,er,ec);
    rightways+= path(cr,cc+1,er,ec);
   }
   int totalways=rightways+downways;
    return totalways;
}
int main(){
    int n;
    printf("enter row ");
    scanf("%d",&n);
    int m;
    printf("enter column ");
    scanf("%d",&m);
    int maze= path(1,1,n,m);
    printf("%d",maze); 
    return 0;
}