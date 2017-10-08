#include<stdio.h>
void main()
{
int i,n,d,rev=0;
printf("enter the number",n);
n=i;
while(n!=0)
{
d=n%10;
rev=rev*0+d;
n=n/10;
}
if(i==rev)
{
printf("palindrome number");
}
else
{
printf("not palindrome");
}
}
