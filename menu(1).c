#include <stdio.h>
int pall(int a){
    int rev=0,rem=0,num;
    num=a;
    while(num>0){
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;}
        if(a==rev){
            printf("pallandrome");
        }
        else{
            printf("not a pallandrome");
        }
}
int prime(int a){
    int i,c=0;
    for(i=2;i<a;i++){
        if(a%i==0){
            c++;
        }
    }
    if(c==0){
        printf("prime");
    }
    else{
        printf("not prime");
    }
}
int sum(int a){
    int sum=0,num;
    num=a;
    while(num>0){
        sum=sum+(num%10);
        num=num/10;
    }
    return sum;
}   
int main(){
    int a,ch;
    do{
        printf("\n----------MENU DRIVEN -----------\n");
        printf("1. check pallandrome\n");
        printf("2. check prime\n");
        printf("3. sum of digits\n");
        printf("4. exit\n");
        printf("enter your choice=");
        scanf("%d",&ch);
        if(ch==4){
            printf("THANKYOU");
        }
        if(ch>0 && ch<4){
            printf("enter a number=");
            scanf("%d",&a);
        }
        switch(ch){
            case 1:
                pall(a);
                break;
            case 2:
                prime(a);
                break;
            case 3:
                sum(a);
                break;
        }
        if(ch>4){
            printf("invalid choice");
        }}
        while(ch!=4);
        return 0;}


    


    



