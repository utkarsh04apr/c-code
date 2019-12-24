/* WAP to check if no is armstrong or not */
#include<stdio.h>
#include<math.h>
void main()
{
int number,originalnumber,result=0,n=0,remainder=0;
printf("enter no which you want to check\n");
scanf("%d",&originalnumber);
number=originalnumber;
while(number!=0)
{
number/=10;
n++;
}
number=originalnumber;
while(number!=0)
{
remainder=number%10;
result+= pow(remainder,n);
number/=10;
}
(result==originalnumber)?printf("number %d is Armstrong\n",originalnumber):printf("number %d is not Armstrong\n",originalnumber);
}
/*
if(result==originalnumber)
printf("number %d is Armstrong\n",originalnumber);
else
printf("number %d is not Armstrong\n",originalnumber);
}
*/



