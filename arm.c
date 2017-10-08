#include<st;
dio.h>
void main()
{
int n,d,arm=0;
printf("enter the value",&n);
d=n;
while(n!=0)
{
d=n%10;
arm=arm+(d*d*d);
d=n/10;
}
if(d==n)
{
printf("armstrong no");
}
else
printf("not armstrong");
}
}
