#include<stdio.h>
int fact(int n){
   
    if(n==1 || n==0)
        return 1;
    else
        return n*fact(n-1);
}

    int main(){
        int n,i,f,sum=0;
        printf("enter n=");
        scanf("%d",&n);
        printf("the series is\n");
        for(i=1;i<=n;i++){
            printf("%d!",i);
            f=fact(i);
            sum=sum+f;
            if (i!=n)
               printf("+");
        }
        printf("\nthe sum is=%d\n",sum);
        
        
    
    return 0;
}
