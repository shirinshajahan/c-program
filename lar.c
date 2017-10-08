#include<stdio.h>
int main()
{
int a,b,c;
printf("enter 3 numbers",&a,&b,&c);
if(a>b&&a>c)
{
printf("a is greater");
}
else if(b>c)
{
printf("b is greater");
}
else
{
printf("c is greater");
}
}
