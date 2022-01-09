#include<stdio.h>
int main()
{
    int x=50,y=60;
    printf("Before swapping:x=%d y=%d",x,y);
    x=x+y;//x=110(50+60)
    y=x-y;//y=50(110-60)
    x=x-y;//x=60(110-50)
    printf("\nAfter swapping:x=%d y=%d",x,y);
    return 0;
}
