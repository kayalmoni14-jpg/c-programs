#include<stdio.h>
int main()
{
int num,rev;
printf("enter a number:");
scanf("%d",&num);
if(num==0)
{
rev=0;
printf("0");
}
else
{
loop:
if(num!=0)
{
rev=num%10;
printf("%d",rev);
num=num/10;
goto loop;
}
}

return 0;

}
