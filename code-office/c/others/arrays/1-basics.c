#include<stdio.h>
void main()
{
int i;
int a[5];
for(i=0;i<5;i++)
{
a[i]=i;
printf("value of %d element of the array is: %d\n",i,a[i]);
printf("address of %d element of array is : %p\n",i,a+i);
printf("\n");
}
printf("size of array a is: %ld\n",sizeof(a));
printf("no of elements in array a is: %ld\n", sizeof(a)/sizeof(a[0]));
}
