#include <stdio.h>

int main()
{
   int sum=0,i,n;
   scanf("%d",&n);//5
   for(i=1;i<=n;i=i+2)
   {
   sum=sum+i;
   }
   printf("%d",sum);

    return 0;
}
