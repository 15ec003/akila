#include <stdio.h>
int main()
{
int a,i,sum=0;
scanf("%d",&a);
for(i=2; i<=a/2; ++i)
{
if(a%i==0)
{
sum=1;
break;
}
}
if (sum==0)
printf("YES");
else
printf("NO");
return 0;
}
