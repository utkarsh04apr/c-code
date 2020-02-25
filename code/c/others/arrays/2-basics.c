#include<stdio.h>
int main ()
{
int size=0;
int marks[size];
int i = 0;
printf("-------------------------------------------------------------------\n");
printf("reading values of array\n");
printf("enter size of array: ");
scanf("%d",&size);
for(i=0;i<size;i++)
{
printf("enter value of marks[%d]: ",i,marks[i]);
scanf("%d",&marks[i]);
}
printf("--------------------------------------------------------------------\n");
printf("displaying array elemnts\n");
for(i=0;i<size;i++)
{
printf("value of marks[%d] is : %d\n",i,marks[i]);
}
printf("-----------------------------------------------------------------------------------\n");
printf("%d",marks);
printf("displaying size of array and addresses of each element\n");
printf("size of arrary marks is %ld\n",sizeof(marks));
printf("displaying address for each element of array\n");
for(i=0;i<size;i++)
{
printf("address of marks[%d] is: %p\n",i,marks+i);
}
printf("size of an element is: %ld\n",sizeof(marks[0]));
printf("-------------------------------------------------------------------------------------\n");
return 0;
}
