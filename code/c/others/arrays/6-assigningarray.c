#include<stdio.h>
void main()
{
int i,size,j;
printf("taking size of array from user\n");
printf("enter size of array: ");
scanf("%d",&size);
int a[size],b[size],c[size];
printf("taking elements from user\n");
for(i=0;i<size;i++)
{
printf("enter element a[%d]: ",i);
scanf("%d",&a[i]);
}
printf("displaying elements\n");
for(i=0;i<size;i++)
{
	printf("value of element a[%d] is %d\n",i,a[i]);
}
printf("assinging array into another array and displaying new array elements\n");
for(i=0;i<size;i++)
{
	b[i]=a[i];
	printf("value of element b[%d] is %d\n",i,b[i]);
}
printf("reversing array a[] and displaying reverse one\n");
for(i=size-1,j=0;i>0,j<size;i--,j++)
{
c[j]=a[i];
printf("value of c[%d] is %d\n",j,c[j]);
}

}
