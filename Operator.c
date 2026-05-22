#include <stdio.h>

int main()
{
  char c;
  int a,b;
  printf("enter the 2 num:");
  scanf("%d %d",&a,&b);
   printf("enter the operator:");
  scanf(" %c",&c);
  switch(c)
  {
      case'+':printf("%d",a+b);
      break;
      case'-':printf("%d",a-b);
      break;
      default:printf("invalid");
      break;
  }

    return 0;
}
