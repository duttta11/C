#include<stdio.h>
int main(){
    int n,i,j;
    char a[100],temp;
    printf("enter the range");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter char=");
        scanf(" %c",&a[i]);
        
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        
    }
    for(i=0;i<n;i++){
        printf("%c",a[i]);
    }
    printf(" \n %c",a[0]);
    return 0;
}
