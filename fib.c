#include<stdio.h>

int main(){
    int n,a=0,b=1,c,i;
    printf("enter the range-");
    scanf("%d",&n);
    printf("the series is=");
    printf("%d %d ",a,b);
    for(i=1;i<=(n-2);i++){
        c=a+b;
        printf("%d ",c);
         a=b;
        b=c;
       
    
    }
  
    return 0;
}
   
