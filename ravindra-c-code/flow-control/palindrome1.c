/* WAP to check whether a given no is palindrome or not */
#include<stdio.h>
void main()
{
int n,originalNumber,reverseNumber=0,remainder;
printf("enter no\n");
scanf("%d",&n);
originalNumber=n;
while(n!=0)
{
remainder = n%10;
reverseNumber = (reverseNumber*10) + remainder;
n/=10;
}
(originalNumber==reverseNumber)?printf("%d is palindrome\n",originalNumber):printf("%d is not palindrome\n",originalNumber);
}

