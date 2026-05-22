#include <stdio.h>

int main()
{
    int n1,n2,n3,n=1;
    scanf("%d",&n);
    while(n>0)
    {
        
        n1=n/10;
        n2=n1%10;
        n3=n2+n1;
      }
         printf("%d",n3);
    return 0;
}
