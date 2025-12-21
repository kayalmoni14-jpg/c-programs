#include<stdio.h>
int main()
{
int num;
printf("enter a number:");
scanf("%d",&num);
int ones=num%10;
int tens=(num/10)%10;
int hundr=(num/100)%10;
int thous=num/1000;
int sum1=ones+tens;
int sum2=hundr+thous;
if(sum1==sum2)
{
printf("success");
}
else
{
printf("failure");
}
return 0;
}
