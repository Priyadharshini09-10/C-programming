#include <stdio.h>

int main()
{
	int i=1,n;
	scanf("%d",&n);
	while(n>=0)
	{
	   printf("%d\n",i);
	   i=i*10;
	   n=n-1;
	
	}

	return 0;
}

