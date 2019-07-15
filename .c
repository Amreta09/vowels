#include<stdio.h>
int main()
{
int ch;
scanf("%d",&ch);
if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
{
printf("Vowels");
}
else if((ch>'a' && ch<'z') || (ch>'A' && ch<'Z'))
{
printf("Consonant");
}
else
{
printf("Invalid");
}
return 0;
}
