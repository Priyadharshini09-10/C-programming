#include <stdio.h>

int main()
{
	int age;
	char a,i;
	printf("enter age:");
	scanf("%d",&age);
	printf("enter nationality:");
	scanf(" %c",&a);
	if(age>=18&&a=='i')
	printf("eligible to vote in india ");
	else
		printf("not eligible to vote in india");

	return 0;
}
