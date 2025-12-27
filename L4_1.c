#include<stdio.h>
int main()
{
int x=0;
loop:if(x<5)
{
int y=x+1;
x++;
printf("\n%d",y);
goto loop;
}
return 0;
}
