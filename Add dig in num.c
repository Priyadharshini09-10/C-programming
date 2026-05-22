#include <stdio.h>

int main()
{
   int num,sum=0,n;
   scanf("%d",&n);
   while(n>0)
   {
   num=n%10;
   sum=sum+num;
   n=n/10;
   }
   printf("%d",sum);

    return 0;
}
