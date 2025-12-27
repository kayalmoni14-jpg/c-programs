#include<stdio.h>
int main()
{
int num,i=10;
int ones,tens,sum;
loop:if(i<=99)
{
if(i%2==0)
{
num=i;
ones=num%10;
 tens=num/10;
 sum=ones+tens;

if(sum==6)

    printf("\n%d",num);
}

i++;
goto loop;
}
return 0;
}
