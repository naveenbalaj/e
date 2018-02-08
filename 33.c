#include <stdio.h>
#include<string.h>
int main()
{
char a[1000];
int count=0,i;
printf("enter the aing:");
scanf("%d[^\n]s",a);
for(i=0;a[i]!=0;i++)
{
if(a[i] == ' ')
count++;
}
printf("%d",count);
return 0;
}
