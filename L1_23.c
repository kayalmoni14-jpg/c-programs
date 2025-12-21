#include<stdio.h>
int main()
{
int num;
printf("enter number:");
scanf("%d",&num);
int ones=num/10;
int tens=num%10;
int sum=ones+tens;
int a=(sum%2)*5;
int res=num-a;
printf("Result = %d",res);
return 0;

}
