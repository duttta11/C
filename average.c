#include <stdio.h>

int main()
{
    int p1,p2;
    float a1,a2,c;
    printf("enter the number of purchases");
    scanf("%d%d",&p1,&p2);
    printf("enter the weight");
    scanf("%f%f",&a1,&a2);
    c=((p1*a1)+(p2*a2))/(a1+a2);
    printf("the average is %.2f",c);
    

    return 0;
}
