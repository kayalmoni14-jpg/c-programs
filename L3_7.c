#include<stdio.h>
int main()
{
int num;
printf("enter a number:");
scanf("%d",&num);
int ones=num%10;
int tens=num/10;
if(ones==tens)
{
printf("success");
}
else
{
printf("failure");
}
return 0;
}
