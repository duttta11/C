#include<stdio.h>
int main(){
    int n,i,j;
    char num='A';
    printf("enter rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
           printf("%c",num);
            num=num+1;
        }
        printf("\n");
    }
    return 0;
}
