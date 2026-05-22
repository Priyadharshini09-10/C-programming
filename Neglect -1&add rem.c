#include <stdio.h>

int main()
{
	int sum=0,n=0;
st: scanf("%d",&n);
	if(n!=-1)
	{
	    sum=sum+n;
		goto st;
	}
	printf("%d",sum);


}
