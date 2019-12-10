/*Write a program to read input until user enter a positive integerPage */
#include<stdio.h>
int main()
{
int a;
do{
printf("enter positive  no\n");
scanf("%d\n",&a);
}while(a<=0);
printf("user has entered positive no %d\n",a);
return 0;
}
