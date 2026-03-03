#include<stdio.h>
int main(){
    int i,n,a[100];
    printf("enter the range=");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the values=");
        scanf("%d",&a[i]);
      }
    printf("\n OLD ARRAY\n");
    for(i=0;i<n;i++){
        printf("%d",a[i]);}
    for(i=0;i<n;i++){
        if(a[i]%2==0){
               a[i]=a[i]*2;
        }
        else
              a[i]=a[i]*3;
                 
    }
    printf("\n NEW ARRAY\n");
    for(i=0;i<n;i++){
        printf("%d",a[i]);}
    return 0;
}
