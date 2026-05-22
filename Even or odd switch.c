#include <stdio.h>

int main()
{
    int a;
    printf("enter the num:");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:printf("odd");
        break;
        case 2:
        case 4:
        case 6:
        case 8:
        case 10:printf("even");
        break;
        default :printf("invalid");
    }
    return 0;
}
