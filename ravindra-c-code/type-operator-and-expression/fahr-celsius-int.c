/*WAP to convert fahreneit into celsius(int)*/
#include<stdio.h>
int fahr,celsius;
int lower=0;
int upper=300;
int step=20;
int main()
{
fahr=lower;
while(fahr<=upper){
celsius=5*(fahr-32)/9;
printf("%d\t%d\n", fahr,celsius);
fahr=fahr+step;
}
/*return 0;*/
}

