#include<stdio.h>
main()
{
int a,count=0,s;
scanf("%d",&a);
for(i=0;i<3;i++)
{
s=a%10;
 ++count;
a=a/10;
}
printf("%d",count);
}

