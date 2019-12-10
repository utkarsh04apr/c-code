/*Find greatest no among three using nested if*/
#include<stdio.h>
void main()
{
int n1,n2,n3;
printf("enter three numbers\n");
scanf("%d %d %d", &n1,&n2,&n3);
if(n1>n2)
if(n1>n3)
printf("%d is largest", n1);
else
printf("%d is largest", n3);
else
if(n2>n3)
printf("%d is largest", n2);
else
printf("%d is largest", n3);
}
