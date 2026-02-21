#include<stdio.h>
int main(){
    int a,sum=0,digit;
    printf("enter num");
    scanf("%d",&a);
    while (a!=0){
        digit=a%10;
        sum=sum+digit;
        a=a/10;
    }
    printf("the sum is%d",sum);
    return 0;
}
