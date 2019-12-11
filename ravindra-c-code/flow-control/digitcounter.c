/* WAP to count no of digits of an integer  entered by user */
#include<stdio.h>
void main()
{
int number;
int n=0;
printf("enter number\n");
scanf("%d",&number);
while(number!=0)
{
number=number/10;
n++;
}
printf("no of digits in number %d is %d\n",number,n);
}
