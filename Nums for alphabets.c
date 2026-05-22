#include <stdio.h>

int main()
{
  char a,b,c;
  scanf("%c",&a);
  if(a>='a'&&a<='z')
  {
      b=a-96;
      printf("%d",b);
       }
     else if(a>='A'&&a<='Z')
     {
         c=a-64;
         printf("%d",c);
     }
     else
     printf("invalid");
    return 0;
}
