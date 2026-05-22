#include <stdio.h>

int main()
{
  int i,fact=1;
  scanf("%d",&i);
 st:if(i>0)
 {   printf("%d\n",i);
 i--;
     goto st;
 }
}
