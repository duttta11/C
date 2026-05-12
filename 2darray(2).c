#include<stdio.h>
int main(){
    int r,c,i,j;
    printf("enter num of rows and cols=");
    scanf("%d%d",&r,&c);
    int a[r][c];
    printf("enter elements=\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]); }
    }
    for(i=0;i<r;i++){
        int s=0;
        for(j=0;j<c;j++){
            s=s+a[i][j];
        }
    printf("sum of rows %d %d \n",i+1,s);
    }
    for(j=0;j<c;j++){
        int e=0;
        for(i=0;i<r;i++){
            e=e+a[i][j];
            
        }
         printf("sum of cols %d %d \n",j+1,e);
    }
    return 0;
}
