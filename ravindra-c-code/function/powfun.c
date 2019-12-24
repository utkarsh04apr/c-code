/* WAP */
#include<stdio.h>
int pow (int base, int n){
long int p;
for(p=1;n>0;--n)
{
p=p*base;
}
return p;
}
void main()
{
int result=pow(5,4);
printf("%d\n",result);
}

