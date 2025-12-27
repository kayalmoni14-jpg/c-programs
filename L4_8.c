#include<stdio.h>
int main()
{
int num,i=11;
int ones,tens,sum=0;
loop:if(i<=99)
{
if(i%2==1)
{

{
num=i;
ones=num%10;
 tens=num/10;
}

if(tens==7)
{


    sum=sum+num;

    //printf("\n%d",sum);
}
}

i++;
goto loop;
}
printf("%d",sum);

return 0;
}
