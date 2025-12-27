#include<stdio.h>
int main()
{
int num,i=11;
int ones,tens,sum;
loop:if(i<=99)
{
if(i%2==1)
{
num=i;
ones=num%10;
 tens=num/10;
 sum=ones+tens;

if(sum==7)

    printf("\n%d",num);
}

i++;
goto loop;
}
return 0;
}
