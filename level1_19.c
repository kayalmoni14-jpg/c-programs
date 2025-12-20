#include<stdio.h>
int main()
{
int a,x,y,z;
printf("enter three digit:");
scanf("%d",&a);
x=a/100;
y=(a/10)%10;
z=a%10;
z=2;
printf("result = %d%d%d",x,y,z);
return 0;
}
