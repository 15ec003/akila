#include<stdio.h>
#include<conio.h>
int main ()
{
int a;
scanf("%d",&a);
if(a%4==0 ||a%400==0)
{
printf("YES");
}
else
{
printf("NO");
}
return 0;
}
