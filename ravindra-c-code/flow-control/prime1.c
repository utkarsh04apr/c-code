/* WAP to find prime no */
#include<stdio.h>
void main()
{
int n;
int flag=0;
printf("enter number\n");
scanf("%d",&n);
for(int i =2; i<=n/2;i++)
{
if(n%i==0)
{
flag=1;
}
}
if(n==1)
{
printf("1 is not prime\n");
}
else if(flag==0)
printf("%d is prime\n",n);
else
printf("%d is not prime\n",n);
}
