/* It takes values of grade points and credit points for each subject and finds gpa */
#include<stdio.h>
# define nsub 6
int main()
{
int i;
float gp[nsub],cp[nsub],gsum=0,cpsum=0;
float gpa=0;
for(i=0;i<nsub;i++)
{
printf("enter grade points and credit points for each subjects: ");
printf("\n");
scanf("%f%f",&gp[i],&cp[i]);
printf("value of gp[%d] is %f\nvalue of cp[%d] is %f\n",i,gp[i],i,cp[i]);
printf("-----------------------------------------------------------------\n");
}
for(i=0;i<nsub;i++)
{
cpsum+=cp[i];
gsum+=gp[i]*cp[i];
}
printf("cpsum is %f\n",cpsum);
printf("gsum is %f\n",gsum);
gpa=gsum/cpsum;
printf("gpa is %f\n",gpa);
return 0;
}
