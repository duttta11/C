#include<stdio.h>
int main(){
    int a[100],n,i,key;
    printf("enter the range");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the numbers");
        scanf("%d",&a[i]);
    }
    printf("enter the element to search=");
    scanf("%d",&key);
    
    for(i=0;i<n;i++){
        if(a[i]==key)
            printf("the value %d is found at %d",a[i],i + 1);
        else 
            printf("not found");
    }
    return 0;
}
