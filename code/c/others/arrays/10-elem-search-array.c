#include<stdio.h>
int main()
{
	int arr[5]={8,2,17,5,12};
	int i,j,num,flag=1;
	printf("enter element to be search: ");
	scanf("%d", &num);
	for(i=0;i<5;i++)
	{
		if(arr[i]==num)
		{
			flag=0;
			printf("%d is present at index %d\n", num,i);
			break;
		}
	}
if(flag==1)
{
	printf("%d is not present\n", num);
}
return 0;
}
         
