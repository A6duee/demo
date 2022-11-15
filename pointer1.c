#include<stdio.h>
void main()
{
int myAge = 54;
int* ptr = &myAge;
printf("%d\n",myAge);
printf("%p\n",&myAge);
printf("%p\n",ptr);
}
