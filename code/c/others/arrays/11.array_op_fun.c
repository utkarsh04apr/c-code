#include<stdio.h>
int input_array(int *a,int n)
{
int i;
for (i=0;i<n;i++)
{
printf("enter array element: ");
scanf("%d",&a[i]);	
}
return 0;
}
int display(int *a,int n)
{
int i;
for(i=0;i<n;i++)
{
printf("element at %d place is %d\n",i,a[i]);
}
return 0;
}
int main()
{
int size;

printf("enter size of array: ");
scanf("%d",&size);
int b[size];
input_array(b,size);
display(b,size);
return 0;
}

