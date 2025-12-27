#include<stdio.h>
int main()
{
int x=1;
int sum=0;
loop:if(x<6)
{

sum=sum+x;
x++;
goto loop;
}
printf("%d",sum);
return 0;
}
