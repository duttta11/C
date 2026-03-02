#include<stdio.h>
int main(){
    int i,j,a[100],t,n;
    printf("enter the range=");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the numbers in the array");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[j]<a[i]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;}}}
     printf("the smallest num is=");           
    
        printf("%d",a[0]);
    
      return 0;         
            
        }
    
    
