#include <stdio.h>

int main()
{
    int a;
    printf("enter the num:");
  scanf("%d",&a);
  if(a>=0&&a<=10)
  printf("there is no greater 10's");
else if(a>=10&&a<=20)
  printf("greater than 10 ");
  else if(a>=20&&a<=30)
  printf("greater than 10,greater than 20");
  else if(a>=30&&a<=40)
  printf("greater than 10,greater than 20,greater than 30");
  else if(a>=40&&a<=50)
  printf("greater than 10,greater than 20,greater than 30,greater than 40 ");
  else
  {
      printf("invalid");
  }
    return 0;
}
