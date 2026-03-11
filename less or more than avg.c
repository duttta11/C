#include<stdio.h>
int main(){
    int i,a[100],n,sum=0,o=0,e=0;
    float c;
    printf("enter range=");
    scanf("%d",&n);
    printf("ORIGINAL ARRAY=\n");
    for(i=0;i<n;i++){
        printf("enter the num=");
        scanf("%d",&a[i]);
        
    }
  
    for(i=0;i<n;i++){
        printf("%d",a[i]);
         sum=sum+a[i];
         
    }
      c=(float)sum/n;
      printf("the avg is =%f",c);
    for(i=0;i<n;i++){
        if(a[i]>c){
            o++; }
        else
            e++;
        } 
    printf("great=%d",o);
    printf("less=%d",e);
     
    return 0;
}
