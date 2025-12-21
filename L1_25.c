#include<stdio.h>
int main()
{
int num;
printf("enter a number:");
scanf("%d",&num);
int ones=num%10;
int tens=(num/10)%10;
int hundreds=num/100;
int sum1=ones+tens+hundreds;
if(sum1<10)
{
printf("sum = %d",sum1);
}

else
{
int ones1=sum1%10;
int tens1=sum1/10;
int sum2=ones1+tens1;
int ones2=sum2%10;
int tens2=sum2/10;
int sum3=ones2+tens2;
printf("sum = %d",sum3);
}

return 0;


}
