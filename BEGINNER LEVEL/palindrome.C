#include<stdio.h>
#include<conio.h>
int main ()
{
int o,a,b,r=0;
scanf("%d",&a);
o=a;
while(a!=0)
{
b=a%10;
r=(r*10)+b;
a=a/10;
}
if(o==r){
printf("YES");
}
else
{
printf("no");
}
return 0;
}
