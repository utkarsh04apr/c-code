/* WAP */
#include<stdio.h>
int fun (int x){
x=30;
printf("value of x is %d\n",x);
return x;
}
void main(){
int x=20;
int y=fun(20);
printf("value of x 2nd time is %d\n",x);
printf("value of y %d\n",y);
}
