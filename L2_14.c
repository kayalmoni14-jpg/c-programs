#include<stdio.h>
int main()
{
int num;
printf("enter number:");
scanf("%d",&num);
int ones=num%10;
int tens=(num/10)%10;
int hund=(num%1000)/100;
int thous=num/1000;
int sum1=ones+tens;
int sum2=hund+thous;
printf("%d",sum1==sum2);
return 0;
}
