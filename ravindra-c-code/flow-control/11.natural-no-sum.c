/* sum of natural no */
#include<stdio.h>
void main()
{
int n,sum,i;
sum=0;
printf("enter the no till we want the sum\n");
scanf("%d",&n);
for(i =1;i<=n;i++)
{
sum=sum+i;
}
printf("sum of first %d natural no is %d\n",n,sum);
}
