/* WAP to count no of digits of an integer  entered by user */
#include<stdio.h>
void main()
{
int originalNumber,number;
int n=0;
printf("enter number\n");
scanf("%d",&number);
originalNumber=number;
while(number!=0)
{
number=number/10;
n++;
}
printf("no of digits in number %d is %d\n",originalNumber,n);
}
