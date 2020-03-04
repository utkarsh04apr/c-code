#include<stdio.h>
int input_array(int a[],int n)
{
int i;
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);	
}
return 0;
}
int display(int a[],int n)
{
int i;
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
return 0;
}
int main()
{
int size, b[size];
printf("enter size of array: ");
scanf("%d",&size);
printf("enter %d array element: ",size);
input_array(b,size);
printf("\nelements in arrays are\n");
display(b,size);
printf("\n");
return 0;
}

