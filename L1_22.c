#include<stdio.h>
int main()
{
int x,tens;
printf("enter a number:");
scanf("%d",&x);
tens=(x/10)%10;
int a=(tens%2)*5;
int res=x-a;
printf("result = %d",res);
return 0;
}
