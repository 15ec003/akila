#include<stdio.h>
#include<conio.h>
int main ()
{
char a;
scanf("%s",a);
if (((a=='a')||(a=='e')||(a=='i')||(a=='o')||(a=='u'))&&((a=='A')||(a=='E')||(a=='I')||(a=='O')||(a=='U')))
{
printf("VOWEL");
}
else
{
printf("CONSONENT");
}
}
