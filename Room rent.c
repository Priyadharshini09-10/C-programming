#include <stdio.h>

int main()
{
int rc,month,rent1,rent2;
scanf("%d %d",&rc,&month);
if(month==1|month==4|month==11|month==12)
{
    rent1=rc*1300;
printf("rent is=%d",rent1);
}
else if(month==0||month>12)
{
printf("give valid month");
}
else 
{

    rent2=rc*1000;

printf("room rent=%d",rent2);
}
 return 0;
}
