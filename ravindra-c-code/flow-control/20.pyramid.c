/* WAP to print pyramid
    *
  * * *
 * * * * *
* * * * * *  
  */
#include<stdio.h>
void main()
{
int i,j,k,noOfRows;
printf("enter no of rows\n");
scanf("%d",&noOfRows);
for(i=1;i<=noOfRows;i++)
{
for(j=i;j<noOfRows;j++)
{
printf(" ");
}
for(k=1;k<(2*i);k++)
{
printf("*");
}
printf("\n");
}
}
