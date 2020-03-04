/* Checks if btwo arrays are same or not */
#include<stdio.h>
int main()
{
int i,flag=0;
int a[5]={2,2,6,4,3};
int b[5]={2,2,6,4,3};
for(i=0;i<5;i++)
{
	if(a[i]!=b[i])
	{
		flag=1;
		break;
	}
}
if(flag==0)
printf("arrays are same\n");
else
printf("arrays are different\n");
return 0;
}
