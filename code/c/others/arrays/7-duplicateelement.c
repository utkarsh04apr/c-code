/*Takes size and values of an array and displays duplicate elements and its values and displays also non duplicate message if not duplicate element*/
#include<stdio.h>
void main()
{
int i,size,j,flag=0;
printf("enter size of array: ");
scanf("%d",&size);
int a[size];
printf("taking values\n");
for(i=0;i<size;i++)
{
printf("enter value of a[%d]: ",i);
scanf("%d",&a[i]);
}
/*printf("displaying\n");
for(i=0;i<size;i++)
{
printf("value of a[%d] is %d\n",i,a[i]);
}*/
printf("finding duplicates\n");
for(i=0;i<size;i++)
{
for(j=i+1;j<size;j++)
{	
if(a[i]==a[j])
{
printf("a[%d] is a duplicate element and its value is %d\n",i,a[i]);
flag=1;
break;
}
}
}
if(flag==0)
{
printf("There is no duplicate element in array\n");
}
}


