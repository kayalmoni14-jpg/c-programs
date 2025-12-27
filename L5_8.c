#include<stdio.h>
int main()
{
int i;
int ones,tens,sum;
for(i=10;i<=99;i=i+2)
{
ones=i%10;
tens=i/10;
sum=ones+tens;
if(sum==6)
{
printf("\n%d",i);
}
}

return 0;
}
