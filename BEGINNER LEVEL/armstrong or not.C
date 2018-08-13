#include<stdio.h>
#include<conio.h>
int main ()
{
int a=0,n,c=0,temp,rem;
scanf("%d",&n);
temp=n;
while(temp!=0)
{
temp=temp/10;
++a;
}
temp=n;
while(temp!=0)
{
rem=temp%10;
c=c+pow(rem,a);
temp=temp/10;
}
if(c==n)
{
printf("YES");
}
else
{
printf("NO");
}
return 0;
}
