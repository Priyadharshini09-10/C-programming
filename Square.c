#include <stdio.h>

int main()
{
	int sq,i=1,n;
	scanf("%d",&n);
	while(i<=n)
	{
		sq=i*i;
		if(i<n)
			printf("%d,",sq);
		else
			printf("%d",sq);
		i=i+1;


	}

	return 0;
}

