/*WAP to convert fahreneit into celsius(float)*/
#include<stdio.h>
float fahr,celsius;
int lower=0;
int upper=300;
int step=20;
int main()
{
fahr=lower;
while(fahr<=upper){
celsius=(5.0/9.0)*(fahr-32.0);
printf("%3.0f\t%f6.1f\n", fahr,celsius);
fahr=fahr+step;
}
/*return 0;*/
}

