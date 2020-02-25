#include<stdio.h>
int main()
{
int i,size;
int sum=0;
printf("enter size of array: ");
scanf("%d",&size);
int marks[size];
printf("reading values\n");
for(i=0;i<size;i++)
{
printf("enter value of marks[%d]: ",i);
scanf("%d",&marks[i]);
}
printf("-------------------------------------------------------------------------------------\n");
printf("displaying elements\n");
for(i=0;i<size;i++)
{
printf("value of marks[%d] is: %d\n",i,marks[i]);
}
printf("----------------------------------------------------------------------------------------\n");
printf("displaying sum of all elements\n");
for(i=0;i<size;i++)
{
sum = sum+marks[i];
}
printf("sum of all element is: %d\n",sum);
printf("------------------------------------------------------------------------------------------\n");
printf("displaying min. element\n");
int min=marks[0];
for(i=0;i<size;i++)
{
if(min>marks[i])
{
min=marks[i];
}
}
printf("minimum element is: %d\n",min);
printf("--------------------------------------------------------------------------------------------------\n");
printf("displaying max. element\n");
int max=marks[0];
for(i=0;i<size;i++)
{
if(marks[i]>max)
{
max=marks[i];
}}
printf("element which has maximum value in the array is: %d\n",max);
printf("--------------------------------------------------------------------------------------------------------\n");
return 0;
}
