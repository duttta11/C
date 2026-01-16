#include <stdio.h>

int main() {
  int a,b,c;
  printf("enter the sides");
  scanf("%d%d%d",&a,&b,&c);
  if((a+b>c) && (b+c>a) && (a+c>b)) {
      printf("it is a valid triangle");
  }
  else{
      printf("it is not a valid triangle");
  }

    return 0;
}
