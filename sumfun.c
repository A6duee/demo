#include<stdio.h>
int add(int,int);
void main()
{
int a,b,sum;
printf("enter the number");
scanf("%d",&a);
printf("enter the 2nd number");
scanf("%d",&b);
sum=add(a,b);
printf("the sum is %d",sum);
}
int add(int x, int y)
{
return(x+y);
}
