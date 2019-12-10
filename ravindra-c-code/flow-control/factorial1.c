/* WAP */
#include<stdio.h>
void main()
{
int n,i;
unsigned long long factorial=1;
printf("enter no\n");
scanf("%d",&n);
for(i=2;i<=n;i++)
{
factorial=factorial*i;
}
if(n<=0)
printf("factorial of negative no does not exist\n");
else
printf("factorial of %d is %llu\n",n,factorial);
}
