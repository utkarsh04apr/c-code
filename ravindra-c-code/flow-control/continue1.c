/* WAP to read 15 integers from user and print sum of only positive integer */
#include<stdio.h>
void main()
{
int i,n,sum;
sum =0;
for(i=0;i<15;i++)
{
printf("enter a no\n");
scanf("%d",&n);
if(n<=0)
  continue;
sum = sum +n;
}
printf("sum is %d\n",sum);
}
