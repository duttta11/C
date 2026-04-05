#include <stdio.h>
int main(){
    int r,c,i,j,s=0;
    printf("enter rows and cols=");
    scanf("%d %d",&r,&c);
    int a[r][c]; 
    printf("enter elements= \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
              }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
         s=s+a[i][j];   
        }
    }
    printf("the sum is %d",s);
    return 0;
}

