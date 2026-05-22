#include <stdio.h>

int main()
{
   int a;
   scanf("%d",&a);
   switch(a)
   {
   case 1:printf("sunday");
   break;
    case 2:printf("monday");
   break;
   case 3:printf("tuesday");
   break; 
   case 4:printf("wednesday");
   break;
   default:printf("invalid");
   break;
   }
    return 0;
}
