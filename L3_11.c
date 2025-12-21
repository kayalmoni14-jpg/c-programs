#include<stdio.h>
int main()
{
int num;
printf("enter a number:");
scanf("%d",&num);
int ones=num%10;
int tens=num/10;
if(tens<=ones)
{
printf("success");
}
else
{
printf("failure");
}
return 0;
}
