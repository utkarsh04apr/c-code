#include<stdio.h>
int x=5;
int *y = &x;
void main()
{
printf("%d\n",x);
printf("%p\n",&x);
printf("%p\n",y);
printf("%d\n",*y);
printf("%p\n",&y);
}
