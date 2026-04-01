 #include <stdio.h>
 #include<string.h>
int main() {
    char str[20];
    int l,i;
    printf("enter the string=");
    scanf("%s",str);
    l=strlen(str);
    for(i=0;i<l;i++){
        str[i]=str[i]+1;
    }
    printf("the string is= %s",str);
    return 0;
}
    
    
