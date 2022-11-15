#include<stdio.h>
void main()
{
int a[10],i;
printf("enter 5 values\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("array values are:\n");
for(i=0;i<5;i++)
printf("%d",a[i]);
}
