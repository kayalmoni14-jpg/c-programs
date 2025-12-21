#include<stdio.h>
int main()
{
int num;
printf("enter a number;");
scanf("%d",&num);
int ones=num%10;
int hundreds=num/100;
int sum=ones+hundreds;
int a=(sum%2)*5;
int res=num-a;
printf("result = %d",res);
return 0;
}
