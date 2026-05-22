#include <stdio.h>
int main()
{
	int i,n,s=0;
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			s++;
		}
	}
	if(s==2)
		printf("prime");
	else
		printf("not a prime");
	return 0;
}









