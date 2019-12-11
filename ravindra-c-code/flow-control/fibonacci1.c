/* WAP to generate fibbonacci sequence given first no and the second number of the sequence */
#include<stdio.h>
void main()
{
int first,second,n,counter=0,sum=0;
printf("enter first number\n");
scanf("%d",&first);
printf("enter second number\n");
scanf("%d",&second);
printf("enter no of terms\n");
scanf("%d",&n);
printf("%d %d ",first,second);
while(counter<n)
{
sum=first+second;
printf("%d ",sum);
first=second;
second=sum;
counter++;
}
printf("\n");
}
