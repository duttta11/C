#include<stdio.h>
int main(){
    int n,i;
    float sum=0;
    printf("enter the num: ");
    scanf("%d",&n);
    printf("the series is: ");
    for(i=1;i<=n;i++){
        printf("%d ",i);
        sum+=1.00/i;
    }
    printf("\n the sum is=%f",sum);
    return 0;
}
