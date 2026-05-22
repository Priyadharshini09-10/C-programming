#include <stdio.h>

int main()
{
   int sum,n;
   scanf("%d",&n);
   if(n%2==0)
   {
       sum=(n*n)+n;
   }
   else
   sum=(n*n)-n;
   printf("%d",sum);
   

    return 0;
}
