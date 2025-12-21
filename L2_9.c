#include<stdio.h>
int main()
{
int num;
printf("enter number:");
scanf("%d",&num);
int ones=num%10;
int tens=num/10;
printf("%d",ones<tens);
return 0;
}
