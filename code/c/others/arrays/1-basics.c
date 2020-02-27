/* It prints values taken using for loop and addresses of each element of array and and also print size ond no of elements of array */
#include<stdio.h>
void main()
{
int i;
int a[5];
for(i=0;i<5;i++)
{
a[i]=i;
printf("value of a[%d] element of array is: %d\n",i,a[i]);
printf("address of a[%d] element of array is : %p\n",i,a+i);
printf("\n");
}
printf("size of array a is: %ld\n",sizeof(a));
printf("no of elements in array a is: %ld\n", sizeof(a)/sizeof(a[0]));
}
