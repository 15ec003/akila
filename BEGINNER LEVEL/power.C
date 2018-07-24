#include<stdio.h>
#include<conio.h>
int main()
{
int a,p,b=1;
scanf("%d%d",&a,&p);
for(int i=0;i<p;i++)
{
b=(b*a);
}
printf("%d",b);
return 0;
}
