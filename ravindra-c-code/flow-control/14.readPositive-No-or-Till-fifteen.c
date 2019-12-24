/* WAP to read integers until user enters a negative integer or no of integers read reaches to 15 */
#include<stdio.h>
void main()
{
int n,count,i;
for(i=0;i<15;i++)
{
printf("enter no\n");
scanf("%d",&n);
if(n<0)
{
break;
}
}
}

