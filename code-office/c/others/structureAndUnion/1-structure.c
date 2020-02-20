#include<stdio.h>
struct point
{
int x;
int y;
};
void main()
{
struct point p1 = {0,1};
printf("x=%d\ny=%d\n",p1.x, p1.y);
}
