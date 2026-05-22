#include <stdio.h>

int main()
{
 int fact=1,i,n;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     fact=fact*i;
    
 }
 printf("fact ans:%d",fact);
    return 0;
}
