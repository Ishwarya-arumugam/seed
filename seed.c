#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,k=0,a[100],b=1,c,d,e;
scanf("%d",&n);
d=n;
while(n!=0)
{
a[++k]=n%10;
n=n/10;
}
for(i=0;i<k;i++)
{
b*=a[i];
e=d*b;
}
printf("%d",e);
getch();
}
