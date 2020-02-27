/* It assigns elements of an given array into another array */
#include<stdio.h>
int main()
{
int a[4]={1,2,3,4};
int b[4];
for(int i=0;i<4;i++)
{
b[i]=a[i];
}
for(int i=0;i<4;i++)
{
printf("value of b[%d] is %d\n",i,b[i]);
}
return 0;
}
