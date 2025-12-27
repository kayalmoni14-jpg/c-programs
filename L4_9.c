#include<stdio.h>
int main()
{
int num,count=0;
printf("enter a number:");
scanf("%d",&num);
if(num==0)
{
count=1;
}
else
{
loop:
if(num!=0)
{

num=num/10;
count++;
goto loop;
}
}
printf("\n%d",count);
return 0;
}
