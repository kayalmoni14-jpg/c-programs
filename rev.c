#include<stdio.h>
int main()
{
int x,a,b,c,d;
printf("enter four digit:");
scanf("%d",&x);
a=x/1000;
b=(x%1000)/100;
c=(x%100)/10;
d=x%10;
printf("reverse = %d%d%d%d",a,b,d,c);
return 0;
}
