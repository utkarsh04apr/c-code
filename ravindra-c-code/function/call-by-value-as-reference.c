#include<stdio.h>
void swap (int *, int *);
void main(){
int x,y;
printf("enter the value of x and y\n");
scanf("%d%d",&x,&y);
swap(&x, &y);
printf("after swapping\n x=%d\n y=%d\n", x,y);
}
void swap (int *a, int *b){
int temp;
temp = *b;
*b = *a;
*a = temp;
}
