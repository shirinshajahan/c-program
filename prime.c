#include<stdio.h>
void main()
{
int i,count=0;
int n=7;
for(i=1;i<=n;i++)
{
if(n%i==0)
{
count++;
break;
}
}
if(count==2)
{
printf("prime number");
}
else
{
printf("not prime number");
}
}
