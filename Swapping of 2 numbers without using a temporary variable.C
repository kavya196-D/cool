#include<stdio.h>
main()
{
    int x=70,y=96;
    x=x+y;
    y=x-y;
    x=x-y;
    printf("After swapping:x=%d,y=%d",x,y);
}


OUTPUT:

    After swapping:x=96,y=70
