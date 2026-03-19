#include<stdio.h>
 int main(){
     int i,n,a[100],x;
    printf("enter range=");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter num=");
        scanf("%d",&a[i]);
    }
    printf("enter the num to divide=");
    scanf("%d",&x);
    for(i=0;i<n;i++){
        if(a[i]%x==0){
            a[i]=a[i]*a[i];
        }}
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    
    
    }
    return 0;
}
