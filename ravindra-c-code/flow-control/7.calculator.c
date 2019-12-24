/*calculator*/
#include<stdio.h>
void main()
{
char operator;
double a,b;
printf("enter operator(+,-,*,/)\n");
scanf("%c",&operator);
printf("enter two operands\n");
scanf("%lf %lf",&a,&b);
switch(operator)
{
case '+':
printf("%lf is the addition of a and b\n",(a+b));
break;
case '-':
printf("%lf is the subtraction of a and b\n",(a-b));
break;
case '*':
printf("%lf is the multiplication of a and b\n",(a*b));
break;
case '/':
printf("%lf is the division of a and b\n",(a/b));
break;
default:
printf("enter valid input\n");
break;
}
}

