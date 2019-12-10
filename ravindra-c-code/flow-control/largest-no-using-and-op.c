/* Find which no is greatest among three using and operator */
#include<stdio.h>
void main()
{
int n1,n2,n3;
printf("enter three no");
scanf("%d %d %d", &n1,&n2,&n3);
if(n1>n2 && n1>n3)
printf("%d is greatest", n1);
else if(n2>n1 && n2>n3)
printf("%d is greatest", n2);
else
printf("%d is greatest", n3);
}
