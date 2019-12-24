/* A Function to get maximum no */
#include<stdio.h>
int max(int x, int y)
{
return (x>y) ? x : y;
}
void main()
{
int a,b,maximum;
printf("enter first no: \n");
scanf("%d",&a);
printf("enter second number: \n");
scanf("%d",&b);
maximum = max(a,b);
printf("maximum no is: %d\n", maximum);
}
