#include<stdio.h>
struct point
{
int x;
int y;
int z;
};
void main()
{
struct point p1 = {20,10,37};
printf("x = %d\ny = %d\nz = %d\n",p1.x,p1.y,p1.z);
}

