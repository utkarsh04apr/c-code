#include<stdio.h>
int main()
{
int arr[5]={95,36,17,21,2};
int i,j,temp=0;
for(i=0;i<5;i++)
	{
		for(j=i;j<5;j++)
		{
			if(arr[i]>arr[j+1])
			{
				temp=arr[j+1];
				arr[j+1]=arr[i];
				arr[i]=temp;
			}
		}
	}
for(i=0;i<5;i++)
{
	printf("new sorted array is %d\n",arr[i]);
}
return 0;
}
