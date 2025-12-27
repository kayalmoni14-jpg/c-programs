#include<stdio.h>
int main()
{
int num,digit,sum=0;
printf("enter a number:");
scanf("%d",&num);
if(num==0)
{
sum=0;
}
else
{
loop:
if(num!=0)
{
digit=num%10;
sum=sum+digit;
num=num/10;
goto loop;
}
}
printf("%d",sum);
}
