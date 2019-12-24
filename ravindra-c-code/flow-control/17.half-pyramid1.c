/* WAP to print half pyramid */

/*
 **
 *** 
 ****
 *****
 */
#include<stdio.h>
void main()
{
int i,j,noofrows;
printf("enter rows\n");
scanf("%d",&noofrows);
for(i=1;i<=noofrows;i++)
{
for(j=0;j<i;j++)
{
printf("*");
}
printf("\n");
}
}
