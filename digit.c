#include<stdio.h>
int main()
{
int n,count=0;
printf("enter the number",&n);
while(n!=0)
{
n=n/10;
count++;
}
printf("no of digits in integer is%d",count);
}
