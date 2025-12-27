#include<stdio.h>
int main()
{
int i;
int ones,sum=0;
for(i=10;i<=99;i++)
{
{
ones=i%10;
}
if(ones==5)
{
sum=sum+i;
}
}
printf("\n%d",sum);

return 0;
}
